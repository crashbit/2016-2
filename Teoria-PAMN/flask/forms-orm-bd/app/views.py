from flask import render_template, flash, redirect, session, url_for, request, g, abort
from flask.ext.login import login_user, logout_user, current_user, login_required
from app import app, db, lm
from .forms import LoginForm, RegistroForm
from .models import User


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