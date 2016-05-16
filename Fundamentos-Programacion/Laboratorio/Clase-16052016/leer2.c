#include <stdio.h>

int main(){
	
	FILE *archivo;
	char c[3];

	archivo = fopen("datos.txt", "r");

	if(archivo == NULL){
		printf("No existe el archivo\n");
		return 0;
	}

	while(!feof(archivo)){   //file end of file
		fgets(c, 3, archivo);
		printf("%s\n", c);
	}

	fclose(archivo);

	printf("\n\n");
}