#include <stdio.h>
#include <string.h>

int main(){
	
	// char producto[2][10] = {{'L','e', 'c', 'h', 'e'}, 
	// 					{'c', 'a', 'g', 'u', 'a', 'm', 'a', 's'}};

	char productos[3][10];

	strcpy(productos[0], "Leche");
	strcpy(productos[1], "Caguamas");
	strcpy(productos[2], "papitas");

	printf("%s ", productos[1]);


	printf("\n\n");
}