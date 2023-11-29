/*
 * carrito.c
 *
 *  Created on: 29 nov 2023
 *      Author: usuario
 */
#include "carrito.h"

producto pedirArticulo(void){
	producto pr;
	puts("Nombre de artículo.");
	fflush(stdin);
	fflush(stdout);
	fgets(pr.nombre,MAXNOMBRE,stdin);
	pr.nombre[strlen(pr.nombre-1)]='\0';

	puts("Precio:");
	fflush(stdout);
	scanf("%f",&(pr.precio));

	puts("IVA:");
	fflush(stdout);
	scanf("%f",&(pr.iva));
	pr.iva=pr.iva/100;

	puts("Cantidad:");
	fflush(stdout);
	scanf("%d",&(pr.cantidad));

	return pr;
}
void mostrarArticulo(producto p){
	printf("\nNombre: %s",p.nombre);
	printf("\nPrecio: %.2f",p.precio);
	printf("\nIVA: %.2f%%",p.iva*100);
	printf("\nCantidad: %d",p.cantidad);
}
int insertarArticulo(producto lista[MAXARTICULOS],int tam, producto p){
	if(tam>=MAXARTICULOS){
		return tam;
	}
	lista[tam]=p;
	tam++;
	return tam;
}
float calculaSubtotal(producto lista[MAXARTICULOS],int tam){
	int i;
	int subtotal=0;
	for(i=0;i<tam;i++){
		subtotal=subtotal+lista[i].cantidad*lista[i].precio;
	}
	return subtotal;
}
float calculaIva(producto lista[MAXARTICULOS],int tam){
	int i;
	int iva=0;
	for(i=0;i<tam;i++){
		iva=iva+lista[i].cantidad*lista[i].precio*lista[i].iva;
	}
	return iva;
}
float calculaTotal(producto lista[MAXARTICULOS],int tam){
	return calculaSubtotal(lista,tam)+calculaIva(lista,tam);
}

