/*Dados las coordenadas de tres puntos en el plano cartesiano, indicar si son colineales. En caso de no serlo, escribir el 
´area del tri´angulo que se forma con esos tres
puntos, en caso de s´i serlo, solicitar otro punto en el plano cartesiano e indicar
si pertenece o no a la recta.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x1,y1,x2,y2,x3,y3,x4,y4;
	printf("Ingrese 3 puntos:\n");
	printf("Ingrese x1:"); scanf("%f",&x1);
	printf("Ingrese y1:"); scanf("%f",&y1);
	printf("Ingrese x2:"); scanf("%f",&x2);
	printf("Ingrese y2:"); scanf("%f",&y2);
	printf("Ingrese x3:"); scanf("%f",&x3);
	printf("Ingrese y3:"); scanf("%f",&y3);
	float m_ab=(y2-y1)/(x2-x1);
	float m_bc=(y3-y2)/(x3-x2);
	float m_ac=(y3-y1)/(x3-x1);
	if(m_ab==m_bc && m_ab==m_ac){
		printf("Los puntos son colineales \nIngrese otro punto:\n");
		printf("Ingrese x4:"); scanf("%f",&x4);
	    printf("Ingrese y4:"); scanf("%f",&y4);
	    float y=(m_ab*(x4-x1))+y1;
	    if(y==y4)printf("El punto 4 pertenece a la recta");
		
	}
	else{
		printf("Los puntos no son colineales: ");
		float a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	    float b=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
	    float c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
	    float s=(a+b+c)/2;
	    float A=sqrt(s*(s-a)*(s-b)*(s-c));
	    printf("El area del triangulo formado es de %f",A);
	}
	return 0;
}
