#include <stdio.h>

int main(){
	int numeros[10]={3, 2, 1, 6, 0, 2, 1, 8, 10, -1 };
	int i;
	int acumulador=0;

	for(i = 0; i< 10; i++){
		printf("%d", numeros[i]);
		acumulador = acumulador + numeros[i];
	}

	printf("%d\n", acumulador);
	printf("\n\n");
}