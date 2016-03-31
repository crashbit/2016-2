#include <stdio.h>

int main(){
	int arreglo[10] = {2,4,2,-1,5,4,8,2,10,11};
	int i, j, k;
	int total = 10;

	for(i=0; i< total; i++){
		for(j=i+1; j< total; j++){
			if(arreglo[i] == arreglo[j]){
				total = total - 1;
				for(k=i; k< total;k++){
					arreglo[k] = arreglo[k+1];
				}
			}
		}
	}

	for(i=0; i< total; i++){
		printf("%d , ", arreglo[i]);
	}


}