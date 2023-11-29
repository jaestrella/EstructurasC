/*
 * carrito.h
 *
 *  Created on: 29 nov 2023
 *      Author: usuario
 */

#ifndef CARRITO_H_
#define CARRITO_H_
#define MAXARTICULOS 50
#define MAXNOMBRE 30
#include <stdio.h>
#include <string.h>
	typedef struct{
		char nombre[30];
		float precio;
		float iva;
		int cantidad;
	}producto;
producto pedirArticulo(void);
void mostrarArticulo(producto p);
int insertarArticulo(producto lista[MAXARTICULOS],int tam, producto p);
float calculaSubtotal(producto lista[MAXARTICULOS],int tam);
float calculaIva(producto lista[MAXARTICULOS],int tam);
float calculaTotal(producto lista[MAXARTICULOS],int tam);
#endif /* CARRITO_H_ */
