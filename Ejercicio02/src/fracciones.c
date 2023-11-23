/*
 * fracciones.c
 *
 *  Created on: 22 nov 2023
 *      Author: usuario
 */
#include "fracciones.h"
#include <stdio.h>

void pedirFraccion(fraccion * f){
	puts("Introduce numerador:");
	fflush(stdout);
	scanf("%d", &f->numerador);

	puts("Introduce denominador: ");
	fflush(stdout);
	scanf("%d", &f->denominador);
}

void mostrarFraccion(fraccion f){
	printf("%d/%d",f.numerador,f.denominador);
}

void dividirFraccion(fraccion f, fraccion f2, fraccion *f3){
	f3->numerador=f.numerador * f2.denominador;
	f3->denominador=f.denominador * f2.numerador;
	//printf("%d/%d : %d/%d = %d/%d",f.numerador,f.denominador,f2.numerador,f2.denominador,numerador,denominador);
}

void multiplicarFraccion(fraccion f, fraccion f2, fraccion *f3){
	f3->numerador=f.numerador*f2.numerador;
	f3->denominador=f.denominador*f2.denominador;
	//printf("%d/%d * %d/%d = %d/%d",f.numerador,f.denominador,f2.numerador,f2.denominador,numerador,denominador);
}
