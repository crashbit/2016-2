
public class Errores {

	public static void main(String args[]){

		int x;
		String param;
		try{
			x = 1/1;
			param = args[0];
			System.out.println("El valor de x es: " + x);
			System.out.println("El parametro es: " + param);
		}catch(ArithmeticException var){
			System.out.println("No se puede hacer esa división :P ");
		}catch(ArrayIndexOutOfBoundsException var){
			System.out.println("Falta de parametros ");
			System.out.println("uso: java errores param1");
		}finally{
			System.out.println("Fin del programa");
		}

	}
}