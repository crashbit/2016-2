public class Prueba{
	
	public static void main(String args[]){

		Alumno alan = new Alumno();
		Alumno noemi = new Alumno();
		Alumno gaby = new Alumno("Gaby", 25);
		alan.nombre = "Alan";
		alan.edad = 26;

		alan.leer();
		alan.escribir();

		noemi.nombre = "Noemi";

		System.out.println(alan);
		System.out.println(noemi);
		System.out.println(gaby);
	}

}