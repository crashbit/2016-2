#include <stdio.h>
#include <string.h>

int main(){
	
	char palabra[10] = {'A','l','e','b','r','i','j','e'};
	char palabra2[10] = "Alebrije";
	char palabra3[10];

	strcpy(palabra3, "Alebrije");

	printf("%s\n", palabra);
	printf("%s\n", palabra2);
	printf("%s\n", palabra3);

	printf("\n\n");
}