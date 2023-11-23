/*
 ============================================================================
 Name        : Ejercicio01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
int main(void) {

	persona p1;

	puts("Introduce datos de la persona:");
	pedirPersona(&p1);

	puts("Persona añadida:");
	mostrarPersona(p1);
}
