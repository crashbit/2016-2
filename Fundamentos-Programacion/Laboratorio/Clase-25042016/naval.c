#include <stdio.h>
#include <stdlib.h>

char cpu[5][5];
char jugador[5][5];
int puntaje_cpu = 0;
int puntaje_jugador = 0;

void carga_cpu();
void carga_jugador();
void muestra_tablero();
void turno_cpu();
int main(){
	int ganador = 0;
	carga_cpu();
	carga_jugador();
	muestra_tablero();

	while(!ganador){
		turno_cpu();
		turno_jugador();
		if(puntaje_cpu==5)
			ganador=1;
		else if(puntaje_jugador==5)
			ganador=1;
	}

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

void turno_cpu(){
	int i, j;

	srand(time(NULL));   // Se genera la semilla
	i = rand()%5;
	j = rand()%5;
	printf("Tirada de CPU, coordenadas %d,%d\n", i, j);
	if(jugador[i][j]=='O'){
		printf("El CPU le dio a tu barco\n");
		jugador[i][j]='x';
		puntaje_cpu = puntaje_cpu +1;
	}

}

