#include <stdio.h>

int main(){

	int mat1[2][2]={{2, 2}, {2, 1}}; 
	int mat2[2][2]={{1, 2}, {2, 2}};  
	int matr[2][2];
	int i, j;

	for(i=0; i< 2; i++){
		for(j=0;j<2; j++){
			matr[i][j] = mat1[i][j] + mat2[i][j];
		}
	}

	for(i=0; i< 2; i++){
		printf("|");
		for(j=0;j<2; j++){
			printf("%d\t", mat1[i][j]);
		}
		printf("|");
		for(j=0;j<2; j++){
			printf("%d\t", mat2[i][j]);
		}
		printf("|");
		for(j=0;j<2; j++){
			printf("%d\t", matr[i][j]);
		}
		printf("|");
		printf("\n");
	}

}