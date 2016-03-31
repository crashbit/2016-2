#include <stdio.h>

int main(){
	int var;
	var = 10;


	if(var < 5){
		printf("var es menor que 5");
	}
	else if(var < 10){
		printf("var es menor que 10");
	}

	else if(var == 10){
		printf("var es un 10");
	}

	else{
		printf("var es mayor que 10");
	}

	printf("\n\n\n");
}