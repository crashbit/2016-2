#include <stdio.h>

int main(){
	
	char letra = 'A';
	
	printf ("%c\n\n\n", letra );

	while(letra != 'q'){
		scanf("%c", &letra);
		printf("%c", letra);
	}

}