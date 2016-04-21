#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char cadena1[10];
	char cadena2[10];
	int i, j;

	printf("Cadena 1: ");
	gets(cadena1);

	printf("Cadena 2: ");
	gets(cadena2);


	if(strlen(cadena1) != strlen(cadena2)){
		printf("No son iguales\n");
		return 0;
	}

	for(i=0; i< strlen(cadena1); i++){
		if(tolower(cadena1[i]) != tolower(cadena2[i])){
			printf("No son iguales\n");
			return 0;
		}
	} 

	printf("Son iguales\n\n");
}