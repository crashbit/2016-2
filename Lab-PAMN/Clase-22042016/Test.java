public class Test{
	
	public static void main(String args[]) {

		Alumno noemi = new Alumno();
		try{
			noemi.evalua(4);
		}catch(AlumnoException a){
			System.out.println("Usted no puede reprobar a un alumno");
		}


	}



}