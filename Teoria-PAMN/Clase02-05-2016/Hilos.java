import java.util.*;

public class Hilos extends Thread{

	int hilo;

	public Hilos(int hilo){
		this.hilo = hilo;
	}

	public void run(){
		int i;
		for(i=0;i<10;i++){
			System.out.println("Hola " + hilo);
		}

	}


}