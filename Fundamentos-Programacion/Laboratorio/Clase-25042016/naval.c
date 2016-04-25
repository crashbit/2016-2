#include <stdio.h>
#include <stdlib.h>

char cpu[5][5];
char jugador[5][5];

void carga_cpu();
void carga_jugador();
void muestra_tablero();
int main(){

	carga_cpu();
	carga_jugador();
	muestra_tablero();

}

void carga_cpu(){
	int i, j, x;

	for(i=0; i<5;i++){
		for(j=0;j<5;j++){
			cpu[i][j]=' ';
		}
	}

	srand(time(NULL));   // Se genera la semilla
	for(x=0;x<5; x++){
		i = rand()%4;   // coordenada en renglon
		j = rand()%4;   // coordenada en columna

		cpu[i][j] = '*';
	}

}

void carga_jugador(){
	int i, j, x;

	for(i=0; i<5;i++){
		for(j=0;j<5;j++){
			jugador[i][j]=' ';
		}
	}

	
	for(x=0;x<5; x++){
		printf("Coordenadas %d (i,j)", x+1);
		scanf("%d,%d", &i,&j);
		jugador[i][j] = 'O';
	}
}

void muestra_tablero(){
	int i,j;

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf(" %c |", cpu[i][j]);
		}
		printf("\n");
	}
	printf("---------------------\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf(" %c |", jugador[i][j]);
		}
		printf("\n");
	}
}

