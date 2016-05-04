public class NoGodin extends Empleado{
	
	public NoGodin(String nombre, String nss, int sueldo){
		super(nombre, nss, sueldo);
	}

	String ganancias(){
		return "muy mal sueldo";
	}
}