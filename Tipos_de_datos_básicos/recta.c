/*Dada la ecuaci´on de una recta de la forma Ax + By + C = 0 y las coordenadas
de un punto (x, y), calcule la distancia del punto a la recta.*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float A,B,C,x,y,d;
	printf("Ingrese una recta Ax +By+c=0\n");
	printf("Ingrese A:");scanf("%f",&A);
	printf("Ingrese B:");scanf("%f",&B);
	printf("Ingrese C:");scanf("%f",&C);
	printf("Ingrese las cordenadas de un punto(x,y):");
	printf("Ingrese x:");scanf("%f",&x);
	printf("Ingrese y:");scanf("%f",&y);
	d=(abs((A*x)+(B*y)+C))/(sqrt((A*A)+(B*B)));
	printf("La distancia de la recta al punto es:%f",d);
	return 0;
}
