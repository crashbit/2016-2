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
void turno_jugador();
int aleatorio(int n);

int main(){
	int ganador = 0;
	srand(time(NULL));
	carga_cpu();
	carga_jugador();
	muestra_tablero();

	while(!ganador){
		
		turno_cpu();
		turno_jugador();
		system("clear");
		muestra_tablero();

		if(puntaje_cpu==3){
			ganador = 1;
			printf("El CPU ganó\n");
		}
		if(puntaje_jugador==3){
			ganador = 1;
			printf("Tu ganaste!!!\n");
		}
	}
}

void carga_cpu(){
	int i, j, x;

	for(i=0; i<5;i++){
		for(j=0;j<5;j++){
			cpu[i][j]=' ';
		}
	}

	for(x=0;x<5; x++){
		i = aleatorio(4);   // coordenada en renglon
		j = aleatorio(4);   // coordenada en columna
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


	printf("Marcador: CPU: %d \t Usuario: %d\n", puntaje_cpu, puntaje_jugador);
/*	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf(" %c |", cpu[i][j]);
		}
		printf("\n");
	}*/
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

	i = aleatorio(4);
	j = aleatorio(4);
	printf("Tirada de CPU, coordenadas %d,%d\n", i, j);
	if(jugador[i][j]=='O'){
		printf("El CPU le dio a tu barco\n");
		jugador[i][j]='x';
		puntaje_cpu = puntaje_cpu +1;
	}
	else{
		printf("El CPU ha fallado\n");
	}

}

void turno_jugador(){
	int i, j;

	printf("Tu turno, coordenadas en i,j: ");
	scanf("%d,%d", &i, &j);
	if(cpu[i][j]=='*'){
		printf("Le has dado a un barco del CPU\n");
		cpu[i][j]='x';
		puntaje_jugador = puntaje_jugador +1;
	}
	else{
		printf("Usted ha fallado\n");
	}

}

int aleatorio(int n){
	int x;
	x = rand()%n;
	return x;
}
