#include <stdio.h>

void suma(int x, int y);

int main(){
	
	int x;
	int y;

	x = 5;
	y = 20;
	suma(x, y);
	printf("%d + %d \n\n", x, y);

}

void suma(int x, int y){     // x = 5, y = 20;

	printf("%d\n\n", x+y);
}
