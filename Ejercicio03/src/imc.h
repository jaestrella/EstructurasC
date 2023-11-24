/*
 * imc.h
 *
 *  Created on: 22 nov 2023
 *      Author: usuario
 */

#ifndef IMC_H_
#define IMC_H_
#define MAXNOMBRE 30

typedef struct{
	char nombre[MAXNOMBRE];
	float peso;
	float altura;
}paciente;


paciente Paciente(void);
void mostrarPaciente(paciente p);
float imc(paciente p);

#endif /* IMC_H_ */
