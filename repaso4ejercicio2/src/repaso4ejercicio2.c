/*
 ============================================================================
 Name        : repaso4ejercicio2.c
 Author      : Ale Mu�oz
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 De un array de n elementos enteros debemos obtener:

 1. Necesito saber si existe un n�mero en el array (ej: {2,66,6,7,2,4,7,2,2,4}) a. El 6 existe	b. El 9 no existe
 2.	Necesito saber cuantas veces aparece un n�mero en el array (ej: {2,66,6,7,2,4,7,2,2,4}, el 4 est� dos veces)
 3.	Necesito buscar un n�mero y que me retorne el �ndice del mismo (ej: {2,66,6,7,2,4,7,2,2,4}, el �ndice de 66 es 1).
 4.	El n�mero m�ximo ingresado
 5.	El n�mero m�nimo ingresado
 6.	Necesito saber la cantidad veces que esta ese m�ximo en el array (ej: {2,66,6,7,2,4,7,2,2,4}, en este array el m�ximo esta dos veces).
 7.	Necesito saber la cantidad veces que esta ese m�nimo en el array (ej: {2,66,6,7,2,4,7,2,2,4}, en este array el m�nimo esta cuatro veces).
 Definir las funciones necesarias con los par�metros que usted crea necesario.
 Cargar el array con los siguientes datos = {2,66,6,7,2,4,7,2,2,4}.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_repaso.h"

int main(void)
{
	setbuf(stdout, NULL);
	int array[10] = {2,66,6,7,2,4,7,2,2,4};
	//int flagIndice = FALSE;
	//int minimo;
	//int maximo;

	if(existeNumero(array, 10))
	{
		printf("El n�mero existe.\n");
	}
	else
	{
		if(!existeNumero(array, 10))
		{
			printf("El n�mero no existe.\n");
		}
		else
		{
			printf("ERROR.\n");
		}
	}

/*	//BUSCAR MINIMO Y MAXIMO
	for(i=0; i<10; i++)
	{
		if(i==0)
		{
			minimo = array[0];
			maximo = array[0];
		}
		else
		{
			if(array[i] < minimo)
			{
				minimo = array[i];
			}
			else
			{
				if(array[i] > maximo)
				{
					maximo = array[i];
				}
			}
		}
	}
	printf("El minimo es: %d\n", minimo);
	printf("El maximo es: %d\n", maximo);


	//RETORNAR INDICE DEL NUMERO QUE SE DESEA
	printf("Ingrese el numero que desea buscar: \n");
	fflush(stdin);
	scanf("%d", &buscarNumero);

	for(i=0; i<10; i++)
	{
		if(array[i] == buscarNumero)
		{
			printf("array[%d] = %d\n", i, buscarNumero);
			flagIndice = TRUE;
		}
	}
	if(!flagIndice)
	{
		printf("El n�mero que ingres� no existe.\n");
	}
*/

	return EXIT_SUCCESS;
}
