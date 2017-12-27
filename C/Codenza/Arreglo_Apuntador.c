/*
* Accesando a un Arreglo usando Apuntador
* 27 DIc 2017
* CaosMx
*/

#include <stdio.h>

int main(){
  int a[5];
  int i;

  for(i=0;i<5;i++){
    a[i]=i;
  }

  int *b;

  b=a;

  for(i=0;i<5;i++){
    printf("El valor: %d en el Arreglo y su direccion: %16lu \n",*b,b);
    b=b+2;
  }
return 0;
}//main
