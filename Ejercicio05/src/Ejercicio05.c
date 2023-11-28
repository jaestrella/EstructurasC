/*
 ============================================================================
 Name        : Ejercicio05.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "contactos.h"
int main(void) {
	contacto c;
	contacto lista[MAXCONTACTOS];
	int num=0;
	int i;
	int opciones;
	int edadIni,edadFin;

	for(i=0;i<MAXCONTACTOS;i++){
		c=Contacto();
		num=insertarContacto(lista,num,c);
	}
	do{
		puts("1. Mostrar la lista de todos los nombres.");
		puts("2. Mostrar las personas de una cierta edad.");
		puts("3. Mostrar las personas cuya inicial hayas puesto.");
		puts("0. Salir del programa.");

		fflush(stdout);
		scanf("%d",&opciones);

		switch(opciones){
		case 1:
			mostrarListaNombres(lista,num);
			break;
		case 2:
			puts("Introduce el rango de edad a buscar.");
			fflush(stdout);
			scanf("%d %d",&edadIni,&edadFin);
			filtrarEdad(lista,num,edadIni,edadFin);
			break;
		}
	}while(opciones!=0);
}
