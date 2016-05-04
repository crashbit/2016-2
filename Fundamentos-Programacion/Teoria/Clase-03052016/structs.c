#include <stdio.h>
#include <string.h>

int main(){

	struct Alumno{
		char nombre[20];
		char num_cuenta[10];
		int edad;
		float promedio;
	};

	int size;

	struct Alumno fi;

	size = sizeof(fi);    // Calcula el tamaño del tipo de dato

	printf("El tamaño es de: %d bytes", size);

	strcpy(fi.nombre, "Pedro");
	strcpy(fi.num_cuenta, "313067497");
	fi.edad = 22;
	fi.promedio = 7.8;

	printf("\nNombre: %s", fi.nombre);
	printf("\nNum. Cuenta: %s", fi.num_cuenta);
	printf("\nEdad: %d", fi.edad);
	printf("\nPromedio: %2.1f", fi.promedio);

	printf("\n\n");
}