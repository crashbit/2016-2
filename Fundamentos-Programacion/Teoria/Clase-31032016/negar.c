#include <stdio.h>

int main(){
	
	int x = 1;  // 0 es falso, 1 es verdadero
	int y = 1;

	if(x || y){
		printf(" Es verdadero\n");
	}
	else{
		printf(" Es falso\n");
	}

	printf("%d | %d = %d", x, y, (x||y));

	printf("\n\n");
}