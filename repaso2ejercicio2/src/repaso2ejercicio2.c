/*
 ============================================================================
 Name        : repaso2ejercicio1.c
 Author      : Ale Mu�oz
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 EJERCICIO 1:
 Ingresar n�meros hasta que el usuario lo decida. Los n�meros tienen que estar
 comprendidos entre -100 y 100. Determinar:
 a. Cantidad de n�meros positivos.
 b. Cantidad de n�meros negativos.
 c. Promedio de n�meros.
 d. De los positivos el m�ximo.

 EJERCICIO 2:
 Aplicar las siguientes funciones:
 a. int getInt(char[], char[], int, int) para el ingreso y validaci�n de datos de tipo entero.
 b. int esPositivo(int) retorna 0 en caso de que el n�mero recibido como par�metro sea positivo, 1 en caso contrario.
 c. float promediarNumeros(int,int): recibe el acumulador y el contador de n�meros y retorna el promedio.
 d. Crear estas funciones dentro de una biblioteca llamada �Repaso2�.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_repaso.h"

#define INTMIN -100
#define INTMAX 100

int main(void)
{
	setbuf(stdout,NULL);
	int bufferInt;
    char mensajeDeIngreso[]= "Ingrese numero entre -100 y 100: ";
    char mensajeDeError[]= "Debe ingresar numero v�lido (-100 a 100): ";
    int contadorEnteros = 0;
    int contadorPositivos = 0;
    int contadorNegativos = 0;
    int acumuladorEnteros = 0;
    float promedioEnteros;
    int enteroMaximo;
    char respuesta;

    do
	{
		bufferInt = getInt(mensajeDeIngreso, mensajeDeError, INTMIN, INTMAX);

		if(esPositivo(bufferInt)==0)
		{
			contadorPositivos++;
			if(contadorPositivos==1)
			{
				enteroMaximo = bufferInt;
			}
			else if(bufferInt>enteroMaximo)
			{
				enteroMaximo = bufferInt;
			}
		}
		else
		{
			contadorNegativos++;
		}

		acumuladorEnteros= acumuladorEnteros + bufferInt;

		printf("�Desea ingresar otro numero? (s/n): ");
		fflush(stdin);
		scanf("%c", &respuesta);
		printf("\n_________________________________\n");

    }while(respuesta=='s' || respuesta=='S');

    contadorEnteros = contadorNegativos + contadorPositivos;
    promedioEnteros= promediarNumeros(acumuladorEnteros, contadorEnteros);

    printf("La cantidad de positivos es: %d \nLa cantidad de negativos es: %d \nEl promedio del enteros es: %f \nEl entero m�ximo ingresado es: %d", contadorPositivos, contadorNegativos, promedioEnteros, enteroMaximo);
    return 0;
}
