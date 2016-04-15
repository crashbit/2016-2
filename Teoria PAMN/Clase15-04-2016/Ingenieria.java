public class Ingenieria extends Alumno{
	
	public Ingenieria(String nombre, int edad){
		super(nombre, edad);
	}

	//Override
	void leer(){
		System.out.println("Ingeniero leyendo");
	}
}