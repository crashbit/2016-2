public class Cliente{
	
	String nombre;

	public Cliente(String nombre){
		this.nombre = nombre;
	}

	void pagar(Pago formaPago){

		System.out.println(formaPago);

	}

}