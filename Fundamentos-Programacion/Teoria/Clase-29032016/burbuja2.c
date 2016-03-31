#include <stdio.h>

int main(){
	int arreglo[10];
	int i, j;
	int temp;

	/*pidiendo datos desde el teclado */
	for(i=0; i< 10; i++){
		printf("Num %d: ", i+1);
		scanf("%d", &arreglo[i]);
	}

	for(i=0; i< 10; i++){
		for(j = i+1; j < 10; j++ ){	
			if(arreglo[i] < arreglo[j]){
				/* Intercambio de valores */
				temp = arreglo[i];
				arreglo[i] = arreglo[j];
				arreglo[j] = temp;
			}
		}
	}

	for(i=0; i< 10; i++){
		printf("%d , ", arreglo[i]);
	}

}