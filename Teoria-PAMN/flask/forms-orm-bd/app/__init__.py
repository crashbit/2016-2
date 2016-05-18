import os
from flask import Flask
from flask.ext.sqlalchemy import SQLAlchemy

from flask_login import LoginManager
from config import basedir

app = Flask(__name__)
app.config.from_object('config')

db = SQLAlchemy(app)

lm = LoginManager()
lm.init_app(app)
lm.login_view = 'login'
lm.login_message = u"Es necesario estar autenticado para acceder al sistema"

#Hacemos esto para evitar referencias circular y no confundir
from app import views, models


#Usamos un administrador
from flask_admin import Admin
from flask_admin.contrib.sqla import ModelView
from models import User
from models import Producto

admin = Admin(app, name='registro', template_mode='bootstrap3')
admin.add_view(ModelView(User, db.session))
admin.add_view(ModelView(Producto, db.session))
