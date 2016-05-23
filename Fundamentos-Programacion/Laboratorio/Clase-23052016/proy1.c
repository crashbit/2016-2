#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char* getfield(char* line, int num);

int main(){
	struct Marathon{
        char pregunta[50];
        char r_a[20];
        char r_b[20];
        char r_c[20];
        char correcta;
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
        strcpy(tarjetas[i].r_a, getfield(tmp, 2));
        strcpy(tarjetas[i].pregunta, getfield(tmp, 1));
        free(tmp);
        i++;
        if(i==2) break;
    }

    printf("Pregunta: %s\n", tarjetas[0].pregunta);
    printf("Respuesta: %s\n", tarjetas[0].r_a);

    printf("Pregunta: %s\n", tarjetas[1].pregunta);
    printf("Respuesta: %s\n", tarjetas[1].r_a);



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
