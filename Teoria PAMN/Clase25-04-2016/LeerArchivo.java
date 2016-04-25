import java.io.*;

public class LeerArchivo{

	public static void main(String args[]) throws IOException{

		FileReader fr;
		BufferedReader br;
		String cadena;

		fr = new FileReader("LeerTeclado.java");
		br = new BufferedReader(fr);

		System.out.println("leyendo algo: ");

		while((cadena = br.readLine())!=null){
			System.out.println(cadena);
		}

	}
}