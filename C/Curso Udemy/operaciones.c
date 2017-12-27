//Operaciones:
//Pedir 2 numeros al user y +,-,*,/

#include <stdio.h>

int main(){
    int n1,n2, suma=0, resta=0, multiplicacion=0, division=0;

    printf("Digita el primer numero: (Todos enteros) \n");
    scanf("%i",&n1);
    printf("Digita el segundo numero: (Todos enteros) \n");
    scanf("%i",&n2);

/*Si quisieramos almacenar los dos de un solo golpe:
    printf("Digite ambos numeros:\n");
    scanf("%i %i", &n1, &n2);
*/
    suma= n1 + n2;
    resta= n1 - n2;
    multiplicacion= n1 * n2;
    division= n1 / n2;

    printf("La suma es: %i\n", suma);
    printf("La resta es: %i\n", resta);
    printf("La multiplicacion es: %i\n", multiplicacion);
    printf("La division es: %i\n", division);


    return 0;
}//main
