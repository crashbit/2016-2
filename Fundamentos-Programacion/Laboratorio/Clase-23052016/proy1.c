#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char* getfield(char* line, int num);
int dado();

int main(){
	struct Marathon{
        char pregunta[50];
        char r_a[50];
        char r_b[50];
        char r_c[50];
        char r_d[50];
        char correcta[2];
        int puntos;
    };

    struct Marathon tarjetas[2];
    char cadena[1024];
    FILE *archivo;
    int i=0;

    srand(time(NULL));
    archivo = fopen("tarjetas.txt", "r");

    if(archivo == NULL){
            printf("No existe el archivo\n");
            return 0;
    }

    // Cargamos los datos en las tarjetas
    while (fgets(cadena, 1024, archivo))
    {
        char* tmp1 = strdup(cadena);
        char* tmp2 = strdup(cadena);
        char* tmp3 = strdup(cadena);
        char* tmp4 = strdup(cadena);
        char* tmp5 = strdup(cadena);
        char* tmp6 = strdup(cadena);
        char* tmp7 = strdup(cadena);

        tarjetas[i].puntos = atoi(getfield(tmp7, 7));
        strcpy(tarjetas[i].correcta, getfield(tmp6, 6));
        strcpy(tarjetas[i].r_d, getfield(tmp5, 5));
        strcpy(tarjetas[i].r_c, getfield(tmp4, 4));
        strcpy(tarjetas[i].r_b, getfield(tmp3, 3));
        strcpy(tarjetas[i].r_a, getfield(tmp2, 2));
        strcpy(tarjetas[i].pregunta, getfield(tmp1, 1));

        free(tmp1);
        free(tmp2);
        free(tmp3);
        free(tmp4);
        free(tmp5);
        free(tmp6);
        free(tmp7);
        i++;
        if(i==2) break;
    }

	i = rand()%2;
	printf("%d\n\n", i);
	printf("%s\n", tarjetas[i].pregunta);

    fclose(archivo);

    printf("\n\n El dado dice: %d", dado());
	printf("\n\n");
}

const char* getfield(char* line, int num)
{
    const char* tok;
    for (tok = strtok(line, "|");
            tok && *tok;
            tok = strtok(NULL, "|\n"))
    {
        if (!--num)
            return tok;
    }
    return NULL;
}

int dado(){
	int numero;

	numero = rand()%6;
	return numero +1;
}





