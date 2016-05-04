public class Test{
	
	public static void main(String args[]){

		BilletesPago billetes = new BilletesPago();
		TarjetaPago tarjeta = new TarjetaPago();

		Cliente noemi = new Cliente("Noemi");
		Cliente david = new Cliente("David");

		noemi.pagar(billetes);
		david.pagar(tarjeta);

	}
}