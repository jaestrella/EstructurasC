/*
 * cumple.h
 *
 *  Created on: 24 nov 2023
 *      Author: usuario
 */

#ifndef CUMPLE_H_
#define CUMPLE_H_
#define MAXNOMBRE 30
#define MAXPERSONAS 8
typedef struct{
	char nombre[MAXNOMBRE];
	int diaCumple;
	int mesCumple;
	int anyCumple;
}persona;

persona Persona(void);

void mostrarPersona(persona p);

int insertarPersona(persona lista[MAXPERSONAS], int tam, persona p);

void buscarPersona(persona lista[MAXPERSONAS], int tam, int mesCumple);

void mostrarListaPersona(persona lista[MAXPERSONAS],int tam);

#endif /* CUMPLE_H_ */
