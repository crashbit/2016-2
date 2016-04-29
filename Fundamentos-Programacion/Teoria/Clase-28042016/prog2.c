#include <stdio.h>

int main(){
	
	int x, n;
	float y;
	char saludo[5];

	printf("Introduce un valor:");
	scanf("%d,%f", &x,&y);  //2,3.2
	printf("sus valores %d -> %f\n\n", x, y);

	scanf("%5s", saludo);
	printf("%s", saludo);

	x=(int)3.141590;  //typecast
	y= x;

	printf("\n %d  ->  %f", x, y);

	printf("\n\n");
}