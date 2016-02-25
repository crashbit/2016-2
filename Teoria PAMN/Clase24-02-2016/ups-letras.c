#include <stdio.h>
#include <ctype.h>

int main(){
	
	char letra;
	FILE *fp;

	fp = fopen("letras.txt", "r");
	if(fp == NULL){
		printf("No está el archivo");
		return 0;
	}

	while(!feof(fp)){     letra != EOF
		letra = fgetc(fp);
		if(letra == '.'){
			printf("%c", letra);
			letra = fgetc(fp);
			printf("%c", toupper(letra));
		}
		else{
			printf("%c", letra);
		}
	}


}