#include <stdio.h>
#include <ctype.h>

int main(){
	
	char palabra[10] = "Alebrije";
	char vocales[5] = "aeiou";
	int i, j;
	int contador = 0;

	for(i=0; i< 10; i++){
		for(j=0; j< 5;j++){
			if(tolower(palabra[i]) == vocales[j])
				contador = contador + 1;
		}
	}

	printf("El total de vocales es: %d\n", contador);
	printf("\n\n");
}