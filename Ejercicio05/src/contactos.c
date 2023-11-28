/*
 * contactos.c
 *
 *  Created on: 27 nov 2023
 *      Author: usuario
 */
#include "contactos.h"
#include <stdio.h>
#include <string.h>
contacto Contacto(void){
	contacto c;
	puts("Introduce nombre:");
	fflush(stdin);
	fflush(stdout);
	fgets(c.nombre,MAXNOMBRE, stdin);
	c.nombre[strlen(c.nombre)-1]='\0';

	puts("Introduce la dirección:");
	fflush(stdin);
	fflush(stdout);
	fgets(c.direccion,MAXDIRECC, stdin);
	c.direccion[strlen(c.direccion)-1]='\0';

	puts("Introduce teléfono:");
	fflush(stdin);
	fflush(stdout);
	fgets(c.telefono,MAXTEL,stdin);
	c.telefono[strlen(c.telefono)-1]='\0';

	puts("Introduce edad: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&c.edad);

	return c;
}

void mostrarContacto(contacto c){
	printf("Nombre: %s\nDirección: %s\nTeléfono: %s\nEdad: %d\n"
			,c.nombre,c.direccion,c.telefono,c.edad);
}

int insertarContacto(contacto lista[MAXCONTACTOS], int tam, contacto c){
	if(tam>=MAXCONTACTOS){
		return tam;
	}

	lista[tam]=c;
	tam++;
	return tam;
}

void mostrarListaContactos(contacto lista[MAXCONTACTOS],int tam){
	int i;
	for(i=0;i<tam;i++){
		mostrarContacto(lista[i]);
	}
}

void mostrarListaNombres(contacto lista[MAXCONTACTOS],int tam){
	int i;
	for(i=0;i<tam;i++){
		printf("\nNombre:%s\n",lista[i].nombre);
	}
}

void filtrarEdad(contacto lista[MAXCONTACTOS], int tam, int edadIni, int edadFin){
	int i;
	for(i=0;i<tam;i++){
		if(lista[i].edad>=edadIni && lista[i].edad<=edadFin){
			mostrarContacto(lista[i]);
		}
	}
}

