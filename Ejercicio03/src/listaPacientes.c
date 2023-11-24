/*
 * listaPacientes.c
 *
 *  Created on: 23 nov 2023
 *      Author: usuario
 */
#include "listaPacientes.h"
#include <string.h>
int insertarPaciente(paciente lista[MAXPACIENTES], int tam, paciente p){
	if(tam>=MAXPACIENTES){
		return tam;
	}

	lista[tam]=p;
	tam++;
	return tam;
}

int buscarPaciente(paciente lista[MAXPACIENTES], int tam, char nombre[MAXNOMBRE], paciente *p){
	int i;
	for(i=0;i<tam;i++){
		if(strcmp(nombre,lista[i].nombre)==0){
			*p=lista[i];
			return 1;
			/*strcpy(p->nombre,lista[i].nombre);
			p->peso=lista[i].peso;
			p->altura=lista[i].altura;*/
		}
	}return 0;
}

void mostrarListaPaciente(paciente lista[MAXPACIENTES],int tam){
	int i;
	for(i=0;i<tam;i++){
		mostrarPaciente(lista[i]);
	}
}
