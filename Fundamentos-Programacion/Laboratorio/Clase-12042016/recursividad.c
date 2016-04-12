//Recursividad

#include <stdio.h>

void recursiva();

int main(){
	recursiva();
}

void recursiva(){
	printf("Soy una función recursiva\n");
	recursiva();
}