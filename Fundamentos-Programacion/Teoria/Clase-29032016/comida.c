#include <stdio.h>

int main(){
		
	/* 0 es NO, 1 es SI */	
	int satisfecho = 0
	int mas = 0

	while(satisfecho == 0){
		comer_una_porcion();
	}
	
	do{

		beber_agua();
		
	} while(mas==1);

	fin();
}