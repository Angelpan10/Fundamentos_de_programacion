//Dado n en N, hallar la suma de los cuadrados de los primeros n naturales.
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("Ingrese un numero natural:"); scanf("%d",&n);
	int suma=(n*(n+1)*((2*n)+1))/6;
	printf("La suma de los primeros %d cuadrados naturales es %d",n,suma);
	return 0;
}
