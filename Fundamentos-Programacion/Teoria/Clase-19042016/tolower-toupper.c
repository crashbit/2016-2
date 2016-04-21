#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	
	char cadena[50];
	int i;

	printf("Su cadena: ");
	gets(cadena);	
	for(i=0; i< strlen(cadena); i++){
		//printf("%c", toupper(cadena[i]));
		cadena[i] = toupper(cadena[i]);
	}

	printf("\n%s", cadena);
	printf("\n\n");
}