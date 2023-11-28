/*
 * contactos.h
 *
 *  Created on: 27 nov 2023
 *      Author: usuario
 */

#ifndef CONTACTOS_H_
#define CONTACTOS_H_
#define MAXNOMBRE 30
#define MAXDIRECC 60
#define MAXTEL 9
#define MAXCONTACTOS 2
typedef struct{

	char nombre[MAXNOMBRE];
	char direccion[MAXDIRECC];
	char telefono[MAXTEL];
	int edad;
}contacto;

contacto Contacto(void);

void mostrarContacto(contacto c);

int insertarContacto(contacto lista[MAXCONTACTOS], int tam, contacto c);

void mostrarListaContactos(contacto lista[MAXCONTACTOS],int tam);

void mostrarListaNombres(contacto lista[MAXCONTACTOS],int tam);

void filtrarEdad(contacto lista[MAXCONTACTOS], int tam, int edadIni, int edadFin);

#endif /* CONTACTOS_H_ */
