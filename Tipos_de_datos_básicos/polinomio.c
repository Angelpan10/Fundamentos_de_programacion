//Dado un polinomio p(x) de grado 2 en R y dado un r en R, hallar p(r).
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Ingresar
	int a,b,c,x,p;
	printf("Programa para evaluar un polinomo:\n");
	printf("Ingrese un polinomio de grado 2 ax^2+bx+c:\n"); scanf("%d" "%d" "%d",&a,&b,&c);
	printf("Ingresa el valor a evaluar x:\n"); scanf("%d",&x);
	//proceso
	p=a*(x*x)+b*x+c;
	//salida
	printf("Evaluacion de polinomio: %d",p);
	
	return 0;
}
