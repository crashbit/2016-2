#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char nombre[20];
	int i;

	printf("Introduce un nombre: ");
	gets(nombre);

	printf("Usted tecleo %s\n\n", nombre);
	printf("La primera es: %c \n", nombre[0]);
	printf("El largo de la cadena es: %d caracteres\n\n", strlen(nombre));
	
	for(i = 0; i< strlen(nombre); i++ ){
		printf("%c", toupper(nombre[i]));
	}

	printf("\n\n");
}