/*

Este programa busca un numero que introduce el usuario en un arreglo de enteros

 */

#include <stdio.h>

int main(){
	int numeros[10] = {1, 4, 6, 8, 10, 20, 8, 6, 9, 2};
	int usuario = -1;
	int i;

	printf("Introduce un numero para buscarlo en el arreglo\n");

	while( usuario != 0){
		printf("Tu numero: ");
		scanf("%d", &usuario);

		/* Ahora buscamos en el arreglo el numero del usuario */
		for(i=0;i<10; i++){
			if(numeros[i] == usuario)
				printf("Tu numero se encuentra en el arreglo\n");
		}

	}

	printf("\n\n");

}
