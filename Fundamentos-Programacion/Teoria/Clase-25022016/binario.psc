Proceso convertir_binario
	Escribir "introduce un numero"
	leer n
	base = 2
	
	Mientras n > base Hacer
		residuo = n % base
		n = n / 2
		Escribir residuo 
	Fin Mientras
FinProceso
