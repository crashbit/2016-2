#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char* getfield(char* line, int num);

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

    archivo = fopen("tarjetas.txt", "r");

    if(archivo == NULL){
            printf("No existe el archivo\n");
            return 0;
    }

    while (fgets(cadena, 1024, archivo))
    {
        char* tmp = strdup(cadena);
        // tarjetas[i].puntos = atoi(getfield(tmp, 7));
        // strcpy(tarjetas[i].correcta,getfield(tmp, 6));
        // strcpy(tarjetas[i].r_c,getfield(tmp, 5));
        // strcpy(tarjetas[i].r_c,getfield(tmp, 4));
        // strcpy(tarjetas[i].r_b,getfield(tmp, 3));
        strcpy(tarjetas[i].r_a, getfield(tmp, 2));
        strcpy(tarjetas[i].pregunta, getfield(tmp, 1));
        free(tmp);
        i++;
        if(i==2) break;
    }

    srand(time(NULL));
	i = rand()%2;
	printf("%d\n\n", i);
	printf("%s\n", tarjetas[i].pregunta);

    fclose(archivo);

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

