/*
 * cumple.c
 *
 *  Created on: 24 nov 2023
 *      Author: usuario
 */

#include "cumple.h"
#include <stdio.h>
#include <string.h>
persona Persona(void){
	persona p;
	puts("Introduce nombre:");
	fflush(stdin);
	fflush(stdout);
	fgets(p.nombre,MAXNOMBRE, stdin);
	p.nombre[strlen(p.nombre)-1]='\0';

	puts("Introduce tu dia de nacimiento: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&p.diaCumple);

	puts("Introduce tu mes de nacimiento : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&p.mesCumple);

	puts("Introduce tu año de nacimiento : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&p.anyCumple);
	return p;
}

int insertarPersona(persona lista[MAXPERSONAS], int tam, persona p){
	if(tam>=MAXPERSONAS){
		return tam;
	}

	lista[tam]=p;
	tam++;
	return tam;
}

void buscarPersona(persona lista[MAXPERSONAS], int tam, int mesCumple){
	int i;

	for(i=0;i<tam;i++){
		if(lista[i].mesCumple==mesCumple){
			mostrarPersona(lista[i]);
		}
	}
}

void mostrarListaPersona(persona lista[MAXPERSONAS],int tam){
	int i;
	for(i=0;i<tam;i++){
		mostrarPersona(lista[i]);
	}
}

void mostrarPersona(persona p){
	printf("Nombre: %s\nDia de nacimiento: %d\nMes de nacimiento: %d\nAño de nacimiento: %d\n"
			,p.nombre,p.diaCumple,p.mesCumple,p.anyCumple);
}
