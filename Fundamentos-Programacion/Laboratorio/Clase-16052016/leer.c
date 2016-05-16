#include <stdio.h>

int main(){
	
	FILE *archivo;
	char c;

	archivo = fopen("datos.txt", "r");

	if(archivo == NULL){
		printf("No existe el archivo\n");
		return 0;
	}

	while(c != EOF){
		c = fgetc(archivo);
		printf("%c\t", c);
	}

	fclose(archivo);

	printf("\n\n");
}