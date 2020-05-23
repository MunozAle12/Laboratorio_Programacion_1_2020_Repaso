/*
 * repaso4utn.c
 *
 *  Created on: 18 abr. 2020
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>

void InicializarArray(int parametroArray[], int cantidad)
{
	int i;
	for(i=0; i<cantidad; i++)
	{
		parametroArray[i] = -1;
	}
}
void MostarArray(int parametroArray[], int cantidad)
{
	int i;
    for(i=0; i<cantidad; i++)
    {
    	printf("\nPosición #%d : %d", i, parametroArray[i]);
    }
}
int SacarLaSuma(int parametroArray[], int cantidad)
{
	int acumulador = 0;
	int i;

	for(i=0; i<cantidad; i++)
	{
		if(parametroArray[i] != -1)
		{
			acumulador = acumulador + parametroArray[i];
		}
	}
	return acumulador;
}
void TestArray(int parametroArray[], int cantidad)
{
	printf("\nPuntero 0 es %d", parametroArray[0]);
	printf("\nPuntero 1 es %d", parametroArray[1]);
	printf("\nPuntero al ultimo es %d\n", parametroArray[cantidad-1]);
}
