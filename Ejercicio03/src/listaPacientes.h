/*
 * listaPaciente.h
 *
 *  Created on: 23 nov 2023
 *      Author: usuario
 */

#ifndef LISTAPACIENTES_H_
#define LISTAPACIENTES_H_
#include "imc.h"
#define MAXPACIENTES 30

int insertarPaciente(paciente lista[MAXPACIENTES], int tam, paciente p);

int buscarPaciente(paciente lista[MAXPACIENTES], int tam, char nombre[MAXNOMBRE], paciente *p);

void mostrarListaPaciente(paciente lista[MAXPACIENTES],int tam);

#endif /* LISTAPACIENTES_H_ */
