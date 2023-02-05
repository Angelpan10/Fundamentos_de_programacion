/*Dado un polinomio p(x) de grado n con coeficientes en R y un r ? R, hallar p(r).
Para este ejercicio, primer se debe leer el grado n, seguido del valor a evaluar r y,
finalmente, seguido de n + 1 n´umeros de punto flotante considerando la lectura
desde an hasta a0.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max 30

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i;
	float A[max],x,y,t;
	printf("Ingrese el grado de un polinomio:"); scanf("%d",&n);
	printf("Ingrese el x a evaluar:"); scanf("%f",&x);
	for(i=n;i>=0;i--){
		printf("Ingrese a_%d:",i); scanf("%f",&A[i]);
		y=t+(A[i]*pow(x,i));
		t=y;
	}
	printf("El polinomio evaluado es %f",y);
	return 0;
}
