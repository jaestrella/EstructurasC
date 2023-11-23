/*
 * persona.c
 *
 *  Created on: 22 nov 2023
 *      Author: usuario
 */
#include "persona.h"
#include <stdio.h>
#include <string.h>

void pedirPersona(persona * p){
	puts("Introduce Nombre:");
	fflush(stdout);
	//scanf("%s", p->nombre);
	fgets(p->nombre,MAXNOMBRE, stdin);
	p->nombre[strlen(p->nombre)-1]='\0';

	puts("Introduce Apellidos:");
	fflush(stdout);
	//scanf("%s", p->nombre);
	fgets(p->apellidos,MAXAPELLIDOS, stdin);
	p->apellidos[strlen(p->apellidos)-1]='\0';

	puts("Introduce edad: ");
	fflush(stdout);
	scanf("%d", &(p->edad));
}

void mostrarPersona(persona p){
	printf("%s, %s, %d.",p.nombre,p.apellidos,p.edad);
}
