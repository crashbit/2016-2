#include <stdio.h>

int main(){

	char valores[10]={'1','2','3','4', '5', '6', '7', '8', '9', '1'};
	int i;

	for(i = 0; i<10; i++){
		printf("%c -> %p\n", valores[i], &valores[i]);

	}



	printf("\n\n");
}