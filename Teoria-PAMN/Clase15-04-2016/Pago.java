public class Pago{
	
	String tipoPago;

	public Pago(){
		this.tipoPago = "monedas";
	}

	public String toString(){
		return "Pagando con " + tipoPago;
	}
}