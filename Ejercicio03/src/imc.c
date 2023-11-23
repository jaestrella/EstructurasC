/*
 * imc.c
 *
 *  Created on: 22 nov 2023
 *      Author: usuario
 */
#include "imc.h"
#include <stdio.h>

void pedirPaciente(paciente * p){
	puts("Introduce nombre:");
	fflush(stdout);
	scanf("%s", p->nombre);

	puts("Introduce el peso en kg: ");
	fflush(stdout);
	scanf("%f", &p->peso);

	puts("Introduce la altura: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &p->altura);
}

void mostrarPaciente(paciente p){
	printf("%s, %.2f, %.2f",p.nombre,p.peso,p.altura);
}

float imc(paciente p){
	return p.peso/(p.altura*p.altura);
}
