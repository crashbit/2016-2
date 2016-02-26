/* Este codigo ha sido generado por el modulo psexport 20150822-mac de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se leyó
   otra variable con scanf. */

int main() {
	float i;
	float mayor;
	float n;
	float numero;
	mayor = 0;
	printf("Cuantos nœmeros?\n");
	scanf("%f",&n);
	i = 0;
	for (i=0;i<=n-1;i+=1) {
		scanf("%s",numero);
		if (numero>mayor) {
			mayor = numero;
		}
	}
	printf("El numero mayor es: %f\n",mayor);
	return 0;
}

