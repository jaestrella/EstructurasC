/*
 ============================================================================
 Name        : Ejercicio03.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "imc.h"
int main(void) {
	paciente p1,p2;

	pedirPaciente(&p1);
	mostrarPaciente(p1);
	puts("");
	printf("IMC=%.2f",imc(p1));

	puts("");

	pedirPaciente(&p2);
	mostrarPaciente(p2);
	puts("");
	printf("IMC=%.2f",imc(p2));
}
