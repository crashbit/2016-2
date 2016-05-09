from flask.ext.wtf import Form
from wtforms import StringField, PasswordField, SubmitField 
from wtforms.validators import Required
from wtforms.validators import Email

class NameForm(Form):
	name = StringField('Como te llamas?', validators=[Required()]) 
	submit = SubmitField('Enviar')

class RegisterForm(Form):
	nombre = StringField('Nombre', validators=[Required()])
	apellidos = StringField('Apellidos', validators=[Required()])
	correo = StringField('Correo electronico', validators=[Required("Este campo se requiere"), Email()])
	password = PasswordField('Contrasenna',validators=[Required("Este campo se requiere")])