/*
 ============================================================================
 Name        : Ejercicio06.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "carrito.h"
int main(void) {
	producto carrito[MAXARTICULOS]={
		{"ratón",10.9,0.21,4},
		{"arroz",0.9,0.04,10},
		{"cerveza",0.45,0.04,30},
		{"paq folios",0.45,0.11,1}
	};
	int tam=4;
	int opcion;
	producto p;
	int i;
	float subtotal,iva,total;
	puts("Programa de carrito de la compra.");
	do{
		puts("1. Insertar artículo");
		puts("2. Mostrar carrito");
		puts("3. Calcular el subtotal");
		puts("4. Calcular el iva");
		puts("5. Total del carrito");
		puts("Opción:");
		fflush(stdout);
		scanf("%d",&opcion);

		switch(opcion){
		case 1:
			puts("Introduce artículo nuevo.");
			p=pedirArticulo();
			tam=insertarArticulo(carrito,tam,p);
			break;
		case 2:
			puts("El carrito es");
			for(i=0;i<tam;i++){
				mostrarArticulo(carrito[i]);
			}
			break;
		case 3:
			subtotal=calculaSubtotal(carrito,tam);
			printf("\nEl subtotal es: %.2f",subtotal);
			break;
		case 4:
			iva=calculaIva(carrito,tam);
			printf("\nEl iva es: %.2f",iva);
			break;
		case 5:
			total=calculaTotal(carrito,tam);
			printf("El total es: %.2f\n",total);
		}

	}while(opcion!=0);

}
