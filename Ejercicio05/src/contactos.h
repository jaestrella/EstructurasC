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
#define MAXCONTACTOS 50
typedef struct{

	char nombre[MAXNOMBRE];
	char direccion[MAXDIRECC];
	char telefono[MAXTEL];
	int edad;
}contacto;
/**
 * funcion que pide la informacion de un contacto
 */
contacto Contacto(void);
/**
 * funcion que muestra un contacto
 */
void mostrarContacto(contacto c);
/**
 * funcion que añade un contacto a una lista
 */
int insertarContacto(contacto lista[MAXCONTACTOS], int tam, contacto c);
/**
 * funcion para mostrar la lista de contactos
 */
void mostrarListaContactos(contacto lista[MAXCONTACTOS],int tam);
/**
 * funcion que muestra los contactos pero solo los nombres
 */
void mostrarListaNombres(contacto lista[MAXCONTACTOS],int tam);
/**
 * funcion que muestra los contactos dentro de un rango de edades dadas
 */
void filtrarEdad(contacto lista[MAXCONTACTOS], int tam, int edadIni, int edadFin);
/**
 * funcion que muestra los nombres segun una inicial dada
 */
void buscarInicial(contacto lista[MAXCONTACTOS], int tam, char letra);

#endif /* CONTACTOS_H_ */
