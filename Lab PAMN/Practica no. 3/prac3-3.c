#include <stdio.h>

int main(){
	FILE *fp;
	int numero;
	int total;

	fp = fopen("numeros.txt","r" );
	if(fp == NULL){
		printf("No hay archivo");
		return 0;
	}

	total = 0;
	while(!feof(fp)){
		fscanf(fp, "%d,", &numero);
		printf("%d\n", numero);
		total = total + numero;
		numero = 0;
	}
	printf("\n\n%d\n\n", total);
	fclose(fp); 
}






