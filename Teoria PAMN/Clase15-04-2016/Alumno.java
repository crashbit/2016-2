public class Alumno{
	
	String nombre;
	int edad;

	public Alumno(String nombre, int edad){
		this.nombre = nombre;
		this.edad = edad;
	}

	public String toString(){
		return "Yo soy " + nombre + " tengo " + edad + " años";
	}

	void leer(){
		System.out.println("Alumno leyendo");
	}

}