/*
 * persona.h
 *
 *  Created on: 22 nov 2023
 *      Author: usuario
 */

#ifndef PERSONA_H_
#define PERSONA_H_
#define MAXNOMBRE 50
#define MAXAPELLIDOS 300

typedef struct{
	char nombre[MAXNOMBRE];
	char apellidos[MAXAPELLIDOS];
	int edad;
}persona;

void pedirPersona(persona * p);
void mostrarPersona(persona p);

#endif /* PERSONA_H_ */
