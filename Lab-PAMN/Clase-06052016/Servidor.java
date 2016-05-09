
import java.net.*;
import java.io.*;
import java.util.*;

public class Servidor{

	public static void main(String args[]) throws UnknownHostException{


	try{
		ServerSocket server = new ServerSocket(8080);
		
		while(true){

			Socket cliente = server.accept();
			PrintWriter salida = new PrintWriter(cliente.getOutputStream(), true);
			System.out.println("Usuario conectado");
			salida.println("Bienvenido");
		}

	}catch(IOException e){
		System.out.println("No hay flujo...");
	}

	}
}
