/*
 * Ej 9 Diseño de Algoritmos
 * 15 de Septiembre 2016
 * Resuelve Ec Cuadrática
 * CaosMx
 */

#include <stdio.h>
//#include <conio.h> Da lata en UBUNTU
#include <math.h>

int main (){

	float a,b,c,x1,x2,d;
	printf("Dame los valores de a,b,c: ");
	scanf("%f%f%f",&a,&b,&c);

	if(a!=0){
		d=(b*b)-4*a*c;
		if(d>0){
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
			printf("Las raices son: %f, %f \n",x1,x2);
		}
		else
			if(d==0){
				x1=-b/(2*a);
				printf("Raices Repetidas= %f \n",x1);
			}
			else{
				x1=-b/(2*a);
				x2=sqrt(fabs(d))/(2*a);
				printf("Raices COmplejas: %f+%f i \n",x1,x2);
			}
	}
	else printf("No es ecuacion cuadratica \n");

	//getch(); Da lata en UBUNTU
	return 0;
}