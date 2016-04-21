public class Alumno extends Exception{
	
	void evalua(int n)throws Exception{
		if(n < 6){
			throw new Exception("alumno 'jodido' :D ");
		}
	}


}