/*
 * persona.c
 *
 *  Created on: 22 nov 2023
 *      Author: usuario
 */
#include "persona.h"
#include <stdio.h>

void pedirPersona(persona * p){
	puts("Introduce Nombre:");
	fflush(stdout);
	scanf("%s", p->nombre);

	puts("Introduce Apellidos: ");
	fflush(stdout);
	scanf("%s", p->apellidos);

	puts("Introduce edad: ");
	fflush(stdout);
	scanf("%d", &p->edad);
}

void mostrarPersona(persona p){
	printf("%s, %s, %d.",p.nombre,p.apellidos,p.edad);
}
