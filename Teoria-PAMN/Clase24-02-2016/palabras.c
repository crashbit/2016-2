#include <stdio.h>
#include <string.h>

int main(){
	char palabra[10];
	FILE *entrada;

	entrada = fopen("palabras.txt", "r");
	if(entrada == NULL){
		printf("No existe el archivo");
		return 0;
	}

	while(!feof(entrada)){
		fgets(palabra, 7, entrada);
		if(strcmp("cumbia", palabra)!=0)
			printf("%s ", palabra);
	}
	fclose(entrada);

}