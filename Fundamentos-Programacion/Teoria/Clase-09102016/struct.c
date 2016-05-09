#include <stdio.h>
#include <string.h>

struct Registro{
	char nombre[20];
	char apellidos[30];
	int edad;
	float promedio;
};

struct Registro captura_datos();
void muestra_datos(struct Registro escuela);
void guarda_datos(struct Registro escuela);

int main(){

	struct Registro escuela;

	escuela = captura_datos();
	muestra_datos(escuela);

}

struct Registro captura_datos(){
	struct Registro escuela;

	printf("Introduzca su Nombre: ");
	gets(escuela.nombre);

	printf("Introduzca sus apellidos: ");
	gets(escuela.apellidos);

	fflush(stdin);

	printf("Introduzca su edad: ");
	scanf("%d", &escuela.edad);

	printf("Introduzca su promedio: ");
	scanf("%f", &escuela.promedio);

	return escuela;
}


void muestra_datos(struct Registro escuela){
	printf("%s %s \t %d \t %2.2f\n", escuela.nombre, escuela.apellidos, escuela.edad, escuela.promedio);
}

void guarda_datos(struct Registro escuela){
	FILE *fp;

	fp = fopen("datos.txt", "w");

	fprintf(fp, "%s %s \t %d \t %2.2f\n", escuela.nombre, escuela.apellidos, escuela.edad, escuela.promedio);

	fclose(fp);
}









