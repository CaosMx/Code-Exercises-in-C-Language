/*
* Suma de 2 Números Complejos
* Usando una EStructura
* CaosMx
*/

#include <stdio.h>

struct complejo{
  int parteReal, parteImaginaria;
};

int main(){

struct complejo a,b,c;

printf("Ingresa los numeros complejos a sumarse:\n");
printf("La estructuea debe ser: a+ib\n\n");

printf("Ingresa la parteReal del primer numero complejo: \n");
scanf("%d",&a.parteReal);
printf("INgresa la parteImaginaria del primer numero complejo: \n");
scanf("%d",&a.parteImaginaria);

printf("Ingresa la parteReal del segundo numero complejo: \n");
scanf("%d",&b.parteReal);
printf("INgresa la parteImaginaria del segundo numero complejo: \n");
scanf("%d",&b.parteImaginaria);

c.parteReal=a.parteReal+b.parteReal;
c.parteImaginaria=a.parteImaginaria+b.parteImaginaria;

if(c.parteImaginaria >= 0){
  printf("La suma es: %d + %di\n\n",c.parteReal,c.parteImaginaria);
}else{
  printf("La suma es: %d  %di\n\n",c.parteReal,c.parteImaginaria);
}
  return 0;
}//main
