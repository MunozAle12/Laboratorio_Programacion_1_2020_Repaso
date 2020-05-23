/*
 * utn_repaso.c
 *
 *  Created on: 8 abr. 2020
 *      Author: Usuario
 */
#include <stdio.h>
#include <stdlib.h>

int getInt(char mensaje[], char mensajeError[], int enteroMin, int enteroMax)
{
	int retorno;
	int flag = 0;

	do
	{
		if(flag==0)
		{
			printf("%s", mensaje);
			printf("\n_________________________________\n");
			flag = 1;
		}
		else
		{
			printf("%s", mensajeError);
			printf("\n_________________________________\n");
		}
		scanf("%d", &retorno);
	}while(retorno<enteroMin || retorno>enteroMax);
	return retorno;
}

int esPositivo(int validarEnteroPositivo)
{
	if(validarEnteroPositivo>0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

float promediarNumeros(int acumuladorTotalEnteros, int contadorTotalEnteros)
{
	float resultadoPromedioEnteros;

	resultadoPromedioEnteros = (float)acumuladorTotalEnteros / contadorTotalEnteros;

	return resultadoPromedioEnteros;
}
