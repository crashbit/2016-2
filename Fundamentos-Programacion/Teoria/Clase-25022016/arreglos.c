#include <stdio.h>

int main(){
	
	int i[8];
	int x;

	i[0] = 20;
	i[1] = 22;
	i[2] = 30;

	for(x=2;x>=0;x--){
		printf("%d\n", i[x]);
	}

	printf("\n\n");
	return 0;
}