/*
 ============================================================================
 Name        : Ejercicio04.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "cumple.h"
int main(void) {
	persona p;
	persona lista[MAXPERSONAS];
	int mes;
	int num=0;
	int i;

	for(i=0;i<MAXPERSONAS;i++){
		p=Persona();
		num=insertarPersona(lista,num,p);
	}

	mostrarListaPersona(lista,num);

	do {
		puts("Introduce tu mes de nacimiento");
		fflush(stdout);
		scanf("%d",&mes);
		buscarPersona(lista,num,mes);
	}while(mes!=0||mes>12);

}
