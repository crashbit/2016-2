#include <stdio.h>

int main(){
	int n;
	int resultado;
	printf("Un numero por favor: ");
	scanf("%d", &n);
	resultado = n;
	while(n>1){
		resultado = resultado * (n-1);
		n = n - 1;
	}
	printf("Tu resultado es: %d \n\n", resultado);
	return 0;
}