/*
 * Ej 11 Diseño de Algoritmos
 * 16 Septiembre 2016
 * Observar salida:
 */

#include <stdio.h>
 int main(){

 	int a=3, b=5, c=7;
 	if(a+b%3*2>5-c/b%a){
 		a=2+3*c;
 		b=a-c%4+10;
 		c=b+c;
 		printf("%d %d %d\n",a,b,c);
 	}
 	else{
 		a=7-c%3;
 		b=a*b%4;
 		printf("%d-%d-%d\n",a,b,c);
 	}
 	if(a!=b&&b!=c){
 		printf("%d\n",a*b*c);
 	}
 	else printf("%d\n",a+b+c);

 	return 0;
 }

 /*
  *Para compilar en Linux:
  *gcc NombreArchivo.c -o NombreArchivoCompilado -lm
  *./NombreArchivoCompilado
  */