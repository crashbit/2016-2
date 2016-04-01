#include <stdio.h>

int main(){
	
	int x=1;
	int contador = 0;

	while(x){

		printf("Iterando %d \n", contador);
		contador = contador + 1;
		if(contador == 10)
			break;   /* o bien poner x = 0 */

	}

	printf("\n\n");

}