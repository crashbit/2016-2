public class Test{
	
	public static void main(String args[]){

		Hilos hilo1 = new Hilos(1);
		Hilos hilo2 = new Hilos(2);
		Hilos hilo3 = new Hilos(3);
		Hilos hilo4 = new Hilos(4);
		Hilos hilo5 = new Hilos(5);
		hilo1.start();
		hilo2.start();
		hilo3.start();
		hilo4.start();
		hilo5.start();
		

	}


}