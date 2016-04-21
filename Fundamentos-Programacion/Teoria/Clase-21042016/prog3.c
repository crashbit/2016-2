#include <stdio.h>

int main(){

	int valores[3][2];
	int i, j;

	for(i=0; i<3; i++){
		for(j=0;j<2;j++){
			printf("valor en la posicion %d,%d: ", i+1,j+1);
			scanf("%d", &valores[i][j]);
		}
		printf("\n");	
	}

	printf("La matriz es: \n");
	for(i=0; i<3; i++){
		for(j=0;j<2;j++){
			printf("%d ", valores[i][j]);
		}
		printf("\n");	
	}


	printf("\n\n");
}