from flask import Flask
from flask import render_template
#from app import forms.NameForm
from forms import NameForm

app = Flask(__name__)

app.config['SECRET_KEY'] = "Adivina adivinador"

@app.route('/')
def index():
	return render_template("index.html")


@app.route('/form')
def formas():
	form = NameForm()
	return render_template("forma.html", form=form)

if __name__ == "__main__":
	app.run(debug=True)