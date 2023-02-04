//Dado un polinomio de grado 2 con coeficientes reales, escribir su derivada e integral indefinida.
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//ingresa el polinomio
	int a,b,c;
	printf("Ingrese un polinomio de grado 2 ax^2+bx+c:\n Ingrese a:"); scanf("%d",&a);
	printf("\n Ingresa b:\n"); scanf("%d",&b);
	printf("\n Ingresa c:\n"); scanf("%d",&c);
	//impresion
	printf("La derivada es %dx+%d\n",2*a,b);
	printf("La integral es %dx^3+%dx^2+%dx",a/3,b/2,c);
	
	return 0;
}
