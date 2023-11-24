/*
 * imc.c
 *
 *  Created on: 22 nov 2023
 *      Author: usuario
 */
#include "imc.h"
#include <stdio.h>
#include <string.h>
paciente Paciente(void){
	paciente p;
	puts("Introduce nombre:");
	fflush(stdin);
	fflush(stdout);
	fgets(p.nombre,MAXNOMBRE, stdin);
	p.nombre[strlen(p.nombre)-1]='\0';

	puts("Introduce el peso en kg: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&p.peso);

	puts("Introduce la altura: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&p.altura);

	return p;
}

void mostrarPaciente(paciente p){
	printf("%s, %.2f, %.2f",p.nombre,p.peso,p.altura);
}

float imc(paciente p){
	return p.peso/(p.altura*p.altura);
}
