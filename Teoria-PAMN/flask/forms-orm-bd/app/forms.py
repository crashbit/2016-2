from flask.ext.wtf import Form
from wtforms import StringField, PasswordField, BooleanField, IntegerField, HiddenField
from wtforms.validators import DataRequired

class LoginForm(Form):
	login = StringField('login', validators=[DataRequired("Es requerido el login")])
	password = PasswordField('password', validators=[DataRequired("Es requerido el password")])
	remember_me = BooleanField('recuerdame', default=False)

class RegistroForm(Form):
	login = StringField('login', validators=[DataRequired("Es requerido el login")])
	password = PasswordField('password', validators=[DataRequired("Es requerido el password")])
	email = StringField('correo electronico', validators=[DataRequired("Es requerido el correo electronico")])

class AgregarForm(Form):
	cantidad = IntegerField("Cantidad", validators=[DataRequired("Se requiere la cantidad")])