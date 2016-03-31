
public class Ingenieria extends Alumno{

	public Ingenieria(){
		System.out.println("Construyendo un Inge, así casual...");
		nombre = "Don nadie";
		edad = 0;
	}

	public Ingenieria(String nom, int edad){
		nombre = nom;
		this.edad = edad;
	}

	void leer(){
		System.out.println("Leyendo como Inge, así casual...");
		super.leer();
	}

	public String toString(){
		return "Yo me llamo " + nombre + " y tengo " + edad + " años" ;
	}

}