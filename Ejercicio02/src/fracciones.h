/*
 * fracciones.h
 *
 *  Created on: 22 nov 2023
 *      Author: usuario
 */

#ifndef FRACCIONES_H_
#define FRACCIONES_H_

typedef struct{
	int numerador;
	int denominador;
}fraccion;

void pedirFraccion(fraccion * f);
void mostrarFraccion(fraccion f);
void dividirFraccion(fraccion f, fraccion f2, fraccion *f3);
void multiplicarFraccion(fraccion f, fraccion f2, fraccion *f3);


#endif /* FRACCIONES_H_ */
