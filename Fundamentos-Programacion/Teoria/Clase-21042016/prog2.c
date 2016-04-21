#include <stdio.h>

int main(){

	int valores[3][2]={{1, 2}, {3, 4}, {5, 6}};
	int i, j;

	for(i=0; i<3; i++){
		for(j=0;j<2;j++){
			printf("%d ", valores[i][j]);
		}
		printf("\n");	
	}


	printf("\n\n");
}