Proceso promedio_total
	Escribir "Cuantos numeros? "
	Leer n
	total <- 0
	promedio <- 0
	i <- 0
	numero <- 0
	
	Para i<-0 Hasta n-1 Con Paso 1 Hacer
		Escribir "Introduce el numero: ", i+1
		leer numero
		total = total + numero
	
	Fin Para
	promedio <- total / n
	Escribir "El total es: ", total
	Escribir "El promedio es: ", promedio
	
	
FinProceso
