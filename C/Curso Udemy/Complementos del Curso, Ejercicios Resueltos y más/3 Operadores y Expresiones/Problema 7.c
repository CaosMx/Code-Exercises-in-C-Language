/*7. Una tienda ofrece un descuento del 15% sobre el total de la compra y 
un cliente desea saber cuánto deberá pagar finalmente por su compra.
* CaosMx
* 27 DIc 2017
*/

#include<stdio.h>

int main(){
	float precio,descuento,precioFinal;
	
	printf("Digite el total de compra: ");
	scanf("%f",&precio);
	
	descuento = precio*0.15;
	precioFinal = precio - descuento;
	/*
	//Otra forma sería con:
	precioFInal=precio*.85;
	//La desventaja es no tener más claro el valor de descuento por si se
	//requiere editar en un futuro
	 */
	
	printf("\nEl precio final es: $%.2f",precioFinal);
	
	
	return 0;
}
