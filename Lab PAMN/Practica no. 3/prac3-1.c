#include <stdio.h>

int main(){
	FILE *fp;
	char c;

	fp = fopen("hola.txt","r" );
	if(fp == NULL){
		printf("No hay archivo");
		return 0;
	}

	while(c != EOF){
		c = fgetc(fp);
		printf("%c", c);
	}
}


