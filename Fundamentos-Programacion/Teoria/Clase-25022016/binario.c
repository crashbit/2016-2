/* Este codigo ha sido generado por el modulo psexport 20150822-mac de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	int base;
	int n;
	int residuo[8];
	int i=0;
	printf("introduce un numero\n");
	scanf("%d",&n);
	base = 2;
	while (n>base) {
		residuo[i] = n%base;
		n = n/2;
		i = i + 1;
	}
	residuo[i] = n;
	for(i=7;i>=0;i--){
		printf("%d ", residuo[i]);
	}
	return 0;
}

