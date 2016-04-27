#include <stdio.h>
#include <stdlib.h>

int aleatorio(int n);

int main(){

	int x,i;
	int usuario;

	x = aleatorio(5);

	for(i=0;i<3;i++){
		printf("Escoja un numero...");
		scanf("%d", &usuario);
		if(usuario == x){
			printf("¡¡¡Ganaste!!!");
			break;
		}
	}

	if(i>=2)
		printf("Eres un perdedor, el numero era: %d, te toca balero...", x);


	printf("\n\n");
}

int aleatorio(int n){
	int numero;

	srand(time(NULL));   //seed rand
	numero = rand()%n;
	return numero;
}
