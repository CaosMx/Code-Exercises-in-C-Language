//Entradas y Salidas
/*
* Ejemplo de PRINTF y SCANF
* CaosMx
* 2 Dic 2017
*/

#include <stdio.h>

int main(){
    int a= 10;
    float b= 15.5;
    char c= 'e';

    //Salida de varios datos en el mismo printf
    printf("%i %.1f %c\n", a, b, c);

    int d;
    float e;
    char f;
    char g[50];


    printf("Digite el valor del int d:\n");
    scanf("%i",&d);
    printf("EL valor es: %i\n",d);

    printf("Digite el valor del float e:\n");
    scanf("%f",&e);
    printf("EL valor es: %f\n",e);

    printf("Digite el valor de su nombre f:\n");
    scanf("%c",&f);//usando scanf
    printf("EL valor es: %c\n",f);

    printf("Digite el valor de su nombre g:\n");
    gets(g);//usando gets
    printf("EL valor es: %s\n",g);

    //AL compilar en ubuntu da error de que gets es peligroso
    //gcc file -o -w file output
    //Para compilar haciendo caso omiso al Warning


    return 0;
}//Main
