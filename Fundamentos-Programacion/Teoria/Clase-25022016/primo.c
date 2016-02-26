/* Este codigo ha sido generado por el modulo psexport 20150822-mac de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	int i;
	int n;
	int primo;
	n = 0;
	i = 0;
	primo = 0;
	printf("Introduce un numero\n");
	scanf("%d",&n);
	for (i=2;i<=n-1;i+=1) {
		if (n%i==0) {
			primo = 0;
			break;
		} else {
			primo = 1;
		}
	}
	if (primo==0) {
		printf("No es primo\n");
	} else {
		printf("Es primo\n");
	}
	return 0;
}

