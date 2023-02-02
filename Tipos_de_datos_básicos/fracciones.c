//Dados el numerador y denominador de dos numeros racionales, escribir el numerador y denominador
#include <stdio.h>
#include <math.h>
/*use system("pause"),si la vantana se cierra de inmediato*/

int main(int argc, char*argv[]){
	printf("Programa para sumar y multiplicar dos numeros racionales\n");
		//Toma de datos
	int a,b,c,d,aux;
	printf("Ingrese el numerador y denominador del primer racional\n"); scanf("%d %d",&a, &b);
	printf("Ingrese el numerador y denominador del segundp racional\n"); scanf("%d %d",&c, &d);
	//Procedimiento
	int sumnum=a*d+b*c;
	int sumdem=b*d;
	int pronum=a*c;
	int prodem=b*d; 
	//impresion
	printf("La suma es: %3d/%3d\n",sumnum,sumdem);
	printf("El producto es: %3d/%3d\n",pronum,prodem);
	return 0;
}

