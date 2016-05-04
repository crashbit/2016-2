public class Test{
	

	public static void main(String args[]){

		Persona juanito = new Persona();
		Mexicano pancho = new Mexicano();

		// juanito.nombre = "Juanito";
		juanito.setNombre("Juanito");
		pancho.setNombre("Pancho");
		pancho.grita();

		System.out.println(juanito.getNombre());
		System.out.println(pancho.getNombre());

	}

}