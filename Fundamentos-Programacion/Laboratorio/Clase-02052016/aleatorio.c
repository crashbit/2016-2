#include <stdio.h>
#include <stdlib.h>

int aleatorio(int n);

int main(){
	
	int x;
	x = aleatorio(6);

	printf("%d", x);

	printf("\n\n");
}

int aleatorio(int n){
	int x;
	srand(time(NULL));
	x = rand()%n;

	return x;
}