//Tipos de Datos
//CaosMx
//27 Dic 2017

#include <stdio.h>

int main(){
    char a= 'e';    //tamaño: 1 byte    rango: 0...255
    short b= -15;   //tamaño: 2 byte    rango: -128...127
    int c= 1024;    //tamaño: 2 byte    rango: -32768...32767
    unsigned int d= 128; //tamaño: 2 byte    rango: 0...65535
    long e = 123456; //tamaño: 4 byte
    float f= 15.68; //tamaño 4 bytes
    double m= 123123.123123 ;//tamaño 4 Bytes

    printf ("EL caracter es: %c\n", a);
    printf("El elemento es: %i\n", b);
    printf("EL elemento es: %i\n", c);
    printf("El elemento es: %i\n", d);
    printf("EL elemento es: %li\n", e);
    printf ("El elemento es: %.2f\n",f);
    printf("El elemento es: %lf\n",m);

    return 0;
}//Main
