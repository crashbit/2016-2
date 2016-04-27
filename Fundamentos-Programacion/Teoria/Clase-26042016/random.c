#include <stdio.h>
#include <stdlib.h>

int aleatorio(int n);

int main(){

	int x;

	x = aleatorio(10);

	printf("%d\n", x);

	printf("\n\n");
}

int aleatorio(int n){
	int numero;

	srand(time(NULL));   //seed rand
	numero = rand()%n;
	return numero;
}
