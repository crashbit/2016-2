#coding: UTF-8
from app import db
from sqlalchemy.ext.hybrid import hybrid_property


class User(db.Model):
	id = db.Column(db.Integer, primary_key=True)
	nickname = db.Column(db.String(20), index=True, unique=True)
	password = db.Column(db.String(20))
	email = db.Column(db.String(120), index=True, unique=True)
	
	def __init__(self, nickname="none", password="none", email="none"):
		self.nickname = nickname
		self.password = password
		self.email = email

	@property
	def is_authenticated(self):
		return True

	@property
	def is_active(self):
		return True

	@property
	def is_anonymous(self):
		return False

	def get_id(self):
		try:
			return unicode(self.id)  # python 2
		except NameError:
			return str(self.id)  # python 3


	def __repr__(self):
		return '<User %r>' % (self.nickname)

class Producto(db.Model):
	id = db.Column(db.Integer, primary_key=True)
	nombre = db.Column(db.String(20), index=True, unique=True)
	precio = db.Column(db.Float)
	inventario = db.Column(db.Integer)
	foto = db.Column(db.String(100))
	descripcion = db.Column(db.Text)
	marca = db.Column(db.String(20), index=True)
	calificacion = db.Column(db.Float)

	def __repr__(self):
			return '<Producto %r>' % (self.nombre 
				)
