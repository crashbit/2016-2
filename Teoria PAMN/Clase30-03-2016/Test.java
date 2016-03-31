public class Test{
	
	public static void main(String args[]){
		Ingenieria jess = new Ingenieria();
		Ingenieria jorge = new Ingenieria("Jorge", 24);

		jess.leer();
		jess.escribir();

		System.out.println(jess);
		System.out.println(jorge);

	}

}