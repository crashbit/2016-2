public class Test{
	
	public static void main(String args[]){

		Godin jess = new Godin("Jess", "3333-222-111", 100);
		NoGodin jorge = new NoGodin("Jorge", "111-222-333", 50);

		Empleado empleados[] = new Empleado[2];

		empleados[0] = jess;
		empleados[1] = jorge;

		System.out.println(empleados[0].ganancias());
		System.out.println(empleados[1].ganancias());

	}

}