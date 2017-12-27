//Directivas del Preprocesador y Variables:
/*
* Diferencias entre Variables LOcales y Globales
* CaosMx
* 27 DIc 2017
 */


//LIBRERIAS
#include <stdio.h>
#include <string.h>
#include <math.h>

//MACROS
#define PI 3.1416

int y= 5;//Variable Global (porque está fuera de la función)

int main(){
    //Variables
    int x= 10;//local (porque está dentro de esta función)

    //Operaciones aritméticas sencillas:
    float suma= 0;
    suma=PI+x;

    printf("La suma es: %.4f\n",suma);


    return 0;
}//Funcion Main
