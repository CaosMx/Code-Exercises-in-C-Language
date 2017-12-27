/*5. Hacer un Programa que calcule áreas de trapecios
* Usnado fórmula: area = ((base_M+base_m)*altura)/2
* CaosMx
* 27 Dic 2017
*/

#include<stdio.h>

int main(){
	int base_M,base_m,altura;
	float area;
	
	printf("Digite la base mayor: ");
	scanf("%i",&base_M);
	printf("Digite la base menor: ");
	scanf("%i",&base_m);
	printf("Digite la altura: ");
	scanf("%i",&altura);
	
	area = ((base_M+base_m)*altura)/2;
	
	printf("\nEl area es: %f",area);
	
	return 0;
}
