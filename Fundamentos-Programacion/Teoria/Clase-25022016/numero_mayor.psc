Proceso numero_mayor
	mayor <- 0
	Escribir "Cuantos nœmeros?"
	Leer n
	i<-0
	Para i<-0 Hasta n-1 Con Paso 1 Hacer
		leer numero
		Si numero > mayor Entonces
			mayor <- numero
		Fin Si
	Fin Para
	
		Escribir "El numero mayor es: ", mayor
	
FinProceso
