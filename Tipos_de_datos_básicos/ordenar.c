//Dados tres numeros, escriba en la salida estandar estos numeros ordenados de menor a mayor.
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//insertar 3 numeros
	int a,b,c,d,e,g;
    printf("Ingrese 3 numeros"); scanf("%d" "%d" "%d",&a,&b,&c);
    //buscamos el menor, el mayor y el de enmedio 
    d=(a<b && a<c)? a:(b<a && b<c)? b:(c<a && c<b)? c:0;
    e=(a>b && a>c)? a:(b>a && b>c)? b:(c>a && c>b)? c:0;
    g=((d==b && e==c)||(d==c && e==b))? a:((d==a && e==c)||(d==c && e==a))? b:((d==a && e==b)||(d==b && e==a))? c:0;
    imprimimos:
    printf("El orden es: %d, %d, %d",d,g,e);
    
	
	return 0;
	
}
