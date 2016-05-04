public class Alumno{
	
	static int contador = 0;
	int id;
	String nombre;
	int edad;

	public Alumno(){
		nombre = "Don nadie";
		edad = 18;
		contador++;
		id = contador;
		System.out.println("Construyendo un alumno...");
	}

	public Alumno(String nom, int e){
		nombre = nom;
		edad = e;
		contador++;
		id = contador;
	}

	public String toString(){
		return "Soy " + nombre + " y tengo " + edad +" años y mi id es " + id ;
	}

	void leer(){
		System.out.println("leyendo...");
	}

	void escribir(){
		System.out.println("Escribiendo...");
	}

}