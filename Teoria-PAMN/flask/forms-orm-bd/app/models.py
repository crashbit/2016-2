#coding: UTF-8
from app import db
from sqlalchemy.ext.hybrid import hybrid_property
from datetime import datetime


class User(db.Model):
	id = db.Column(db.Integer, primary_key=True)
	nickname = db.Column(db.String(20), index=True, unique=True)
	password = db.Column(db.String(20))
	email = db.Column(db.String(120), index=True, unique=True)
	carritos = db.relationship('Carrito', backref='cliente', lazy='dynamic')
	
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
	producto_en = db.relationship('Carrito_Producto', backref='Producto', lazy='dynamic')


	def __repr__(self):
		return '<Producto %r>' % (self.nombre)

class Carrito(db.Model):
	id = db.Column(db.Integer, primary_key=True)
	id_user = db.Column(db.Integer, db.ForeignKey('user.id'))
	fecha = db.Column(db.DateTime)
	carrito_tiene = db.relationship('Carrito_Producto', backref='Carrito', lazy='dynamic')

	def __init__(self, id_user):
		self.id_user = id_user
		self.fecha = datetime.now()

	def __repr__(self):
		return '<Carrito %r>' % (self.id)

class Carrito_Producto(db.Model):
	id = db.Column(db.Integer, primary_key=True)
	id_carrito = db.Column(db.Integer, db.ForeignKey('carrito.id'))
	id_producto = db.Column(db.Integer, db.ForeignKey('producto.id'))
	cantidad = db.Column(db.Integer)

	def __repr__(self):
		return '<Carrito_Producto %r>' % (self.id)


