public class Alumno{
	

	void evalua(int calificacion) throws AlumnoException {
		if(calificacion < 6)
			throw new AlumnoException("Alumno reprobado");
	}

}