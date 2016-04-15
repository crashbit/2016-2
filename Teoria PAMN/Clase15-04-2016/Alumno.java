public class Alumno{
	
	String nombre;
	int edad;
	int matricula = 0;
	static int contador = 0;

	public Alumno(String nombre, int edad){
		this.nombre = nombre;
		this.edad = edad;
		contador = contador + 1;
		matricula = contador;
	}

	public String toString(){
		return "Yo soy " + nombre + " tengo " + edad + " años y mi matricula es " + matricula;
	}

	void leer(){
		System.out.println("Alumno leyendo");
	}

}