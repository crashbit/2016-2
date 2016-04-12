//Recursividad

#include <stdio.h>

void recursiva(int n);

int main(){
	recursiva(10);
}

void recursiva(int n){
	if(n>0){
		printf("%d\n", n);
		recursiva(n-1);		
	}
	printf("fin de la funcion\n");
	return;
}