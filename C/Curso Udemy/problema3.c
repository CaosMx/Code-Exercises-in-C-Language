/*Obtener la hipotenusa de un triángulo rectángulo, pidiendo los 2 catetos:
* CaosMx
* 27 Dic 2017
*/

#include <stdio.h>
#include <math.h>

int main(){
    float hipotenusa, cateto1, cateto2;
    printf("Digite los catetos (flotantes):\n");
    scanf("%f %f", &cateto1, &cateto2);

    hipotenusa= sqrt(pow(cateto1,2)+pow(cateto2,2));
    printf("La hipotenusa es: %.2f",hipotenusa);

    return 0;
}//main
//Para compilar desde terminal se necesita:
//gcc -o file file.c -lm
//significa linkeado a librería matemática
