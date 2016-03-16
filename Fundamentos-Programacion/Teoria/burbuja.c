#include <stdio.h>

int main(){
	int arreglo[10]={3,5,-1,0,9,88,2,7,10, 6};
	int i, j;
	int temp;

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