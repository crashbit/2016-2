public class Prueba{
	
	public static void main(String args[]){

		Alumno josue = new Alumno("Josue", 18);
		Ingenieria fabiola = new Ingenieria("Fabis", 20);
		Contaduria fulano = new Contaduria("Fulano", 33);
		Alumno alumnos[] = new Alumno[3];

		System.out.println(josue);
		System.out.println(fabiola);

		alumnos[0] = josue;
		alumnos[1] = fabiola;
		alumnos[2] = fulano;

		alumnos[0].leer();
		alumnos[1].leer();
		alumnos[2].leer();
	}

}