#include <stdio.h>

int main(){
	
	FILE *archivo;
	int total = 0;
	int numero;

	archivo = fopen("datos.txt", "r");

	if(archivo == NULL){
		printf("No existe el archivo\n");
		return 0;
	}

	while(!feof(archivo)){   //file end of file
		fscanf(archivo, "%d, ", &numero);
		total = total + numero;
		numero = 0;
	}

	printf("El gran total es: %d", total);

	fclose(archivo);

	printf("\n\n");
}