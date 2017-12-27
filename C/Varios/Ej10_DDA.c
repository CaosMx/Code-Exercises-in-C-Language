/*
 * Ej 10 Diseño de Algoritmos
 * 16 Septiembre 2016
 * Introducir los Segundos y saber cuantas horas, minutos y segundos equivale
 * CaosMx
 */

#include <stdio.h>

 int main(){

 	int h,m,s;
 	printf("Dame el numero de Segundos: ");
 	scanf("%i",&s);

 	printf("Son ");
 	if(s<0){
 		printf("Error, no puede haber menos de 0 segundos\n");
 	}
 	else{
 		if(s>3600){
 			h=s/3600;
 			printf("%i Horas, ",h);
 			s=s-3600*h;
 		}
 		if(s>60){
 			m=s/60;
 			printf("%i Minutos, ",m);
 			s=s-m*60;
 		}
 		if(s>0) printf("%i Segundos, ",s);
 	}
 	printf("\n");
 	return 0;
 }
