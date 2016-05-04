import java.io.*;

public class LeerTeclado{

	public static void main(String args[]) throws IOException{

		InputStreamReader isr;
		BufferedReader br;
		String cadena;

		isr = new InputStreamReader(System.in);
		br = new BufferedReader(isr);

		System.out.println("Teclea algo: ");
		cadena = br.readLine();

		System.out.println("Usted tecleo: " + cadena);
	}
}