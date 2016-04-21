#include <stdio.h>

int main(){

	char letras[3][10]={"Joel", "Ingeniero", "Alebrijes"};
	int i, j;

	for(i=0; i<3; i++){
			printf("%s\n", letras[i]);
	}

	for(i=0; i<3; i++){
		for(j=0;j<10;j++){
			printf("%c ", letras[i][j]);
		}
		printf("\n");	
	}
	
	printf("\n\n");
}