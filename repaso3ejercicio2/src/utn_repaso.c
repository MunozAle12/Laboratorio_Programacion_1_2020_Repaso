/*
 * utn_repaso.c
 *
 *  Created on: 8 abr. 2020
 *      Author: Usuario
 */
#include <stdio.h>
#include <stdlib.h>

void inicializarArrayInt(int numeros[], int len)
{
	int i;

	for(i=0; i<len; i++)
	{
		numeros[i] = 0;
	}
}

void cargarArrayInt(int arrayInt[], char mensaje[], char mensajeError[], int enteroMin, int enteroMax, int len)
{
	int i;

	for(i=0; i<len;i++)
	{
		printf("%s", mensaje);
		printf("\n_________________________________\n");
		scanf("%d", &arrayInt[i]);

		while(arrayInt[i]<enteroMin || arrayInt[i]>enteroMax)
		{
			printf("%s", mensajeError);
			printf("\n_________________________________\n");
			scanf("%d", &arrayInt[i]);
		}
	}
}

int esPositivoArrayInt(int arrayInt[], int len, int* pPositivoMax)
{
	int i;
	int contador = 0;

	for(i=0; i<len; i++)
	{
		if(arrayInt[i]>0)
		{
			contador++;
			if(contador==1)
			{
				*pPositivoMax = arrayInt[i];
			}
			else if(arrayInt[i]>*pPositivoMax)
			{
				*pPositivoMax = arrayInt[i];
			}
		}
	}
	return contador;
}

int esNegativoArrayInt(int arrayInt[], int len) //
{
	int i;
	int contador = 0;

	for(i=0; i<len; i++)
	{
		if(arrayInt[i]<0)
		{
			contador++;
		}
	}
	return contador;
}

float promediarArrayInt(int arrayInt[], int len)
{
	int i;
	float resultado;
	int acumulador = 0;

	for(i=0; i<len; i++)
	{
		acumulador = acumulador + arrayInt[i];
	}
	resultado = (float)acumulador / len;

	return resultado;
}
