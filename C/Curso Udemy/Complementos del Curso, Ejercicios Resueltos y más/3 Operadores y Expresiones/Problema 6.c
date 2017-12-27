/*6. Calcule la media aritmética de 3 números cualesquiera (Propuesto)
* Usando la fórmula: media_aritmetica = (n1+n2+n3)/3
* CaosMx
* 27 DIc 2017
*/

#include<stdio.h>

int main(){
	int n1,n2,n3,media_aritmetica=0;
	
	printf("Digite 3 numeros: ");
	scanf("%i %i %i",&n1,&n2,&n3);
	
	media_aritmetica = (n1+n2+n3)/3;
	
	printf("La media aritmetica es: %i",media_aritmetica);
	
	
	return 0;
}
