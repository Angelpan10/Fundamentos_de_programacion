/*Suponiendo que los a˜nos que son m´ultiplo de cuatro son bisiestos, salvo aquellos
que son multiplos de cien, salvo para estos ultimos, aquellos que son multiplos
de cuatrocientos, dado un a˜no, indique cuantos dias tiene febrero de ese a˜no.*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,d;
	printf("Ingrese un año para saber si es bisiesto:"); scanf("%d",&a);
	d=((a%4==0)&&((a%100!=0)||(a%400==0)))? 1:0;
	printf("El año es bisiesto si d=1, d=%d",d);
	return 0;
}
