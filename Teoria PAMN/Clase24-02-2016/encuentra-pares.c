#include <stdio.h>

int main(){
	int numero;
	FILE *entrada;
	FILE *salida;

	salida = fopen("salida.txt", "w");
	entrada = fopen("numeros.txt", "r");
	if(entrada == NULL){
		printf("No existe el archivo");
		return 0;
	}

	while(!feof(entrada)){
		fscanf(entrada, "%d", &numero);
		if(numero % 2 == 0)
			fprintf(salida, "%d,", numero);
	}
	fclose(entrada);
	fclose(salida);

}