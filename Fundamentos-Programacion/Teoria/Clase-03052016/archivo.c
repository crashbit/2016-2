#include <stdio.h>

int main(){
	
	FILE *archivo;
	char letra;

	archivo = fopen("datos.txt", "r");

	if(archivo == NULL){
		printf("No se encuentra el archivo\n");
		return 0;
	}

	while(letra != EOF){
		letra = fgetc(archivo);
		printf("%c", letra);
	}

	fclose(archivo);


	printf("\n\n");
}