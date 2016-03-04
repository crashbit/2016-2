/*

Este programa busca una letra en una palabra

 */

#include <stdio.h>

int main(){
	char palabra[10] = "Murcielago";
	char letra;
	int i;

	printf("Introduce una letra para buscarla en la palabra\n");

	while( letra != 'z'){
		printf("Tu letra: ");
		scanf("%c", &letra);
		getchar();

		/* Ahora buscamos en el arreglo de caracteres la letra que introdujo el usuario */
		for(i=0;i<10; i++){
			if(palabra[i] == letra)
				printf("Tu letra se encuentra en la palabra\n");
		}

	}

	printf("\n\n");

}
