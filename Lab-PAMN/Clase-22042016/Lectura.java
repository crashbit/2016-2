import java.io.*;

public class Lectura{
	
	public static void main(String args[]){

		InputStreamReader isr;
		BufferedReader br;
		FileReader fr;
		String cadena;

		try{
			fr = new FileReader("Test.java");
			isr = new InputStreamReader(System.in);
			br = new BufferedReader(fr);
		
			System.out.println("Teclea algo");
			cadena = br.readLine();
			System.out.println("Usted tecleo: " + cadena);

		}catch(IOException e){
			System.out.println("Error!!!");
		}
	}	

}