/*
 ============================================================================
 Name        : Ejercicio03.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "listaPacientes.h"
#include "imc.h"
int main(void) {
	int opcion;
	paciente lista[MAXPACIENTES];
	paciente p;
	char nombre[MAXNOMBRE];
	int num=0;
	do{
		puts("Programa de gestión de la clínica.");

		puts("1. Contar pacientes.");
		puts("2. Mostrar pacientes.");
		puts("3. Añadir paciente. ");
		puts("4. Buscar paciente. ");
		puts("5. Calcular IMC paciente. ");
		puts("0. Salir.");

		puts("Introduce opcion 0-5:");
		fflush(stdout);
		scanf("%d",&opcion);

		switch(opcion){
		case 1:
			printf("\n En la lista hay ahora mismo %d pacientes\n",num);
			break;

		case 2:
			printf("\nListado de pacientes:\n");
			mostrarListaPaciente(lista,num);
			break;

		case 3:
			puts("Alta de paciente.");
			puts("Introduce al paciente");
			p=Paciente();
			num=insertarPaciente(lista,num,p);
			break;
		}
	}while(opcion!=0);
}
