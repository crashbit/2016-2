#include <stdio.h>

int main(){
	
	struct INE{
		char nombre[20];
		int edad;
		char sexo;
		char foto[10000];
	};

	struct INE cdmx[22000];

	strcpy(cdmx[300].nombre, "Julian");
	cdmx[300].edad = 39;
	cdmx[300].sexo = 'H';
}