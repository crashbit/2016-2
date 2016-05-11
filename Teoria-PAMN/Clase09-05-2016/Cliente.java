import java.net.*;
import java.util.*;
import java.io.*;


 public class Cliente{

 	public static void main(String args[]) throws UnknownHostException, IOException{

 		Socket conn = new Socket("www.unam.mx", 80);

 		Scanner entrada = new Scanner(conn.getInputStream());

 	}
 }