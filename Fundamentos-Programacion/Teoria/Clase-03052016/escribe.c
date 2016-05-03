#include <stdio.h>
#include <string.h>

int main(){
	
	FILE *archivo;
	char frase[50]="Esta es una historia de como un alumno reprueba";
	int i;

	archivo = fopen("salida.txt", "a");

	for(i=0;i<strlen(frase);i++){
		fputc(frase[i], archivo);
	}
	

	fclose(archivo);


	printf("\n\n");
}