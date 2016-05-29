from flask import render_template, flash, redirect, session, url_for, request, g, abort
from flask.ext.login import login_user, logout_user, current_user, login_required
from app import app, db, lm
from .forms import LoginForm, RegistroForm, AgregarForm
from .models import User
from .models import Producto


@lm.user_loader
def load_user(id):
    return User.query.get(int(id))

@app.before_request
def before_request():
    g.user = current_user

@app.route("/")
@app.route("/index")
def index():
	return render_template('index.html')

@app.route("/login", methods=['GET', 'POST'])
def login():
	form = LoginForm()

	if form.validate_on_submit():
		session['remember_me'] = form.remember_me.data
		user = User.query.filter_by(nickname = form.login.data).first()
		if user:
			if user.password == form.password.data:
				login_user(user, remember = session['remember_me'])
				flash('Usuario autenticado')
				next = request.args.get('next')
				return redirect(next or url_for('index'))
	return render_template('login.html', title='Sign in', form=form)

@app.route("/registro", methods=['GET', 'POST'])
def registro():
	form = RegistroForm()

	if form.validate_on_submit():
		user = User(nickname=form.login.data, password=form.password.data, email=form.email.data)
		db.session.add(user)
		db.session.commit()
		login_user(user, remember=True)
		flash('Usuario registrado')
		return redirect(url_for('index'))
	return render_template('registro.html', title='Registro', form=form)


@app.route("/logout")
def logout():
	logout_user()
	return redirect(url_for('index'))

@app.route("/protegido")
@login_required
def protegido():
	return "Para los cuates"


@app.errorhandler(404)
def not_found_error(error):
    return render_template('404.html')

@app.errorhandler(500)
def internal_error(error):
    db.session.rollback()
    return render_template('500.html'), 500

#Agregando ruta para productos
@app.route("/productos")
def lista_productos():
	productos = Producto.query.all()
	print productos
	return render_template('catalogo.html',productos = productos)

@app.route("/productos/<id_producto>")
def desc_producto(id_producto):
	producto = Producto.query.get(id_producto)
	form = AgregarForm()
	return render_template('desc_producto.html',producto = producto, form = form)

@app.route("/agregar/<id_producto>", methods=['GET', 'POST'])
@login_required #Quiere decir que para agregar algo al carrito el usuario debe estar loggeado
def agregar(id_producto):
	form = AgregarForm()
	if form.validate_on_submit():
		cantidad = form.cantidad.data
		producto = Producto.query.get(id_producto)
		return render_template('carrito.html', producto = producto, cantidad = cantidad)

	productos = Producto.query.all()
	return render_template('catalogo.html',productos = productos)


