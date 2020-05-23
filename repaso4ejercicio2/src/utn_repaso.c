/*
 * utn_repaso.c
 *
 *  Created on: 24 abr. 2020
 *      Author: Usuario
 */
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int existeNumero(int* pArray, int size)
{
	int retorno = -1;
	int buscarNumero;
	int i;
	//int flagExiste = FALSE;

	if(pArray!=NULL && size>0)
	{
		retorno = 0;
		printf("Ingrese número que desea buscar: \n");
		fflush(stdin);
		scanf("%d", &buscarNumero);

		for(i=0; /*!flagExiste &&*/ i<size; i++)
		{
			if(pArray[i] == buscarNumero)
			{
				//flagExiste = TRUE;
				retorno = 1;
				break;
			}
		}
	}
	return retorno;
}
