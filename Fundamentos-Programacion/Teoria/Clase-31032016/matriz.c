#include <stdio.h>

int main(){
	
	int x[3] =  {3, 4, 5};
	int matriz[3][2] = {{1, 1}, {2, 2}, {3, 3}};
	int i, j;

	for(i = 0; i< 3; i++){
		for(j=0; j<2; j++){
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");
}