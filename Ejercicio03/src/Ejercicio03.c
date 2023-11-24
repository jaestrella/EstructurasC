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
#include <string.h>
#include "listaPacientes.h"
#include "imc.h"
int main(void) {
	int opcion;
	paciente lista[MAXPACIENTES];
	paciente p;
	char nombre[MAXNOMBRE];
	int num=0;
	int numOld;
	do{
		puts("Programa de gestión de la clínica.");

		puts("1. Contar pacientes.");
		puts("2. Mostrar pacientes.");
		puts("3. Añadir paciente. ");
		puts("4. Buscar paciente. ");
		puts("5. Calcular IMC paciente. ");
		puts("6. Borrar paciente. ");
		puts("0. Salir.");

		puts("Introduce opcion 0-6:");
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
		case 4:
			printf("Nombre del paciente a buscar: ");
			fflush(stdout);
			fflush(stdin);
			fgets(nombre,MAXNOMBRE,stdin);
			nombre[strlen(nombre)-1]='\0';

			if(buscarPaciente(lista,num,nombre,&p)){
				printf("\nPaciente encontrado.\n");
				mostrarPaciente(p);
			}else{
				printf("\n Paciente %s no encontrado.\n",nombre);
			}
			break;
		case 5:
			printf("Nombre del paciente a calcular: ");
			fflush(stdout);
			fflush(stdin);
			fgets(nombre,MAXNOMBRE,stdin);
			nombre[strlen(nombre)-1]='\0';

			if(buscarPaciente(lista,num,nombre,&p)){
				printf("\nPaciente encontrado.\n");
				mostrarPaciente(p);
				printf("\nIndice de masa corporal: %.2f",imc(p));
			}else{
				printf("\n Paciente %s no encontrado.\n",nombre);
			}
			break;
		case 6:
			printf("Nombre del paciente a borrar: ");
			fflush(stdout);
			fflush(stdin);
			fgets(nombre,MAXNOMBRE,stdin);
			nombre[strlen(nombre)-1]='\0';
			numOld=num;
			num=borrarPaciente(lista,num,nombre);
			if(num==numOld){
				printf("Paciente no encontrado.");
			}else{
				printf("Se ha elimnado el paciente %s. Quedan %d pacientes.\n",nombre,num);
			}
		}
	}while(opcion!=0);
}
