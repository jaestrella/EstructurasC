/*
 ============================================================================
 Name        : Ejercicio02.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "fracciones.h"
int main(void) {
	fraccion f1;
	fraccion f2,fres;

	puts("Introduce la primera fraccion.");
	pedirFraccion(&f1);

	puts("Introduce la segunda fraccion.");
	pedirFraccion(&f2);

	mostrarFraccion(f1);

	puts("");

	mostrarFraccion(f2);

	puts("");

	dividirFraccion(f1,f2,&fres);

	printf("la division entre ");
	mostrarFraccion(f1);
	printf(" y ");
	mostrarFraccion(f2);
	printf(" es ");
	mostrarFraccion(fres);

	puts("");

	multiplicarFraccion(f1,f2,&fres);

	printf("la multiplicacion entre ");
	mostrarFraccion(f1);
	printf(" y ");
	mostrarFraccion(f2);
	printf(" es ");
	mostrarFraccion(fres);
}
