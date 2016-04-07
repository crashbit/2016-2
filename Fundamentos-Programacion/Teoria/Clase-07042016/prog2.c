#include <stdio.h>

int suma(int x, int y);
int potencia(int x, int y);

int main(){
	
	int x;
	int y;
	int total = 0;
	x = 5;
	y = 3;
	total = suma(x, y);
	printf("%d + %d = %d\n\n", x, y, total);

	total = potencia(x, y);
	printf("%d ^ %d = %d\n\n", x, y, total);	
}

int suma(int x, int y){     // x = 5, y = 20;

	return x + y;
}

int potencia(int x, int y){
	int total = 1;
	int i;
	for(i = 0; i< y; i++){
		total = total * x;
	}

	return total;
}
