
public class Test{
	
	public static void main(String args[]){
		int i;
		String parametro;
		try{
			i = 1/0;
			parametro = args[1];
		}catch(ArithmeticException e){
			System.out.println("Eres medio bruto, eso no se puede :P");
		}catch(ArrayIndexOutOfBoundsException e){
			System.out.println("Te faltan... parametros :)");
		}
		finally{
			System.out.println("Ejecutando finally");
		}
	}
}