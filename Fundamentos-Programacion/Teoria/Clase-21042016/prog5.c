#include <stdio.h>
#include <string.h>

int main(){

	char letras[3][10]={"Joel", "Ingeniero", "Alebrijes"};
	int i, j;
	int largo;

	for(i=0; i<3; i++){
			largo = strlen(letras[i]);
			printf("%s -> largo: %d\n", letras[i], largo);
	}

	for(i=0; i<3; i++){
		for(j=0;j<10;j++){
			printf("%c ", letras[i][j]);
		}
		printf("\n");	
	}
	
	printf("\n\n");
}