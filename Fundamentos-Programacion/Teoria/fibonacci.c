#include <stdio.h>

int main(){
	int sem1 =1;
	int sem2 =1;
	int n;
	int res;

	printf("Cuantos numeros de fibonnaci quieres: ");
	scanf("%d", &n);
	res = 0;
	while( n != 0){
		res = sem1 + sem2;
		sem2 = sem1;
		sem1 = res;
		n = n -1;
		printf("%d, ", res);
	}

}