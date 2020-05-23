/*
 ============================================================================
 Name        : repaso4ejercicio1.c
 Author      : Ale Muñoz
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 CARGA ALEATORIA DE ARRAY
 ============================================================================

 */
#include <stdio.h>
#include <stdlib.h>
#include "repaso4utn.h"

#define CANTIDADNUMEROS 10

int main()
{
    printf("Clase 04 18 de abril\n\n");
    int listaDeNumeros[CANTIDADNUMEROS];
    int sumaNumeros;

    InicializarArray(listaDeNumeros, CANTIDADNUMEROS);	//Inicializo el valor de cada posición

    listaDeNumeros[9]=2;	//Último elemento del array
    listaDeNumeros[0]=8;	//Primer elemento del array

    TestArray(listaDeNumeros, CANTIDADNUMEROS);
    MostarArray(listaDeNumeros, CANTIDADNUMEROS);

    sumaNumeros = SacarLaSuma(listaDeNumeros, CANTIDADNUMEROS);

    printf("\n\nLa suma de las posiciones ocupadas es %d", sumaNumeros);
    /*
	for(i=0;i<CANTIDADNUMEROS;i++)
	{
		printf("\ningrese un numero :");
		scanf("%d",&listadoDeNumeros[i]);
		//listadoDeNumeros[i]=i*2;
	}
    */
    printf("\n\n");
    // MostarArray(listadoDeNumeros,CANTIDADNUMEROS);
    return 0;
}
