Proceso primos
	
	n <- 0
	i <- 0
	primo <- 0
	Escribir "Introduce un numero"
	Leer n
	
	Para i<-2 Hasta n-1 Con Paso 1 Hacer
		Si n%i == 0 Entonces
			primo <- 0
		Sino
			primo <- 1
		Fin Si
	Fin Para
	
	Si primo == 0 Entonces
		Escribir "No es primo"
		
	Sino
		Escribir "Es primo"
	Fin Si
	
FinProceso
