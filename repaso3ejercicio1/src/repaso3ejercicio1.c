/*
 ============================================================================
 Name        : repaso3ejercicio1.c
 Author      : Ale Muñoz
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 EJERCICIO:
 Ingresar 10 numeros enteros y guardarlos en un array. Los números tienen que estar
 comprendidos entre -100 y 100. Determinar:
 a. Cantidad de números positivos
 b. Cantidad de números negativos.
 c. Promedio de números.
 d. De los positivos el máximo.

 EJERCICIO:
 Aplicar las siguientes funciones:
 a. int getInt(char[], char[], int, int) para el ingreso y validación de datos de tipo entero.
 b. int esPositivo(int) retorna 1 en caso de que el número recibido como parámetro sea positivo, 0 en caso contrario.
 c. float promediarNumeros(int,int): recibe el acumulador y el contador de números y retorna el promedio.
 Crear estas funciones dentro de una biblioteca llamada "Repaso2"
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_repaso.h"

#define SIZE 10
#define INVESTED -1
#define DIRECT 1

void inicializarArrayInt(int numeros[], int len);
void cargarArrayInt(int numeros[], int len);
int sumarArrayInt(int numeros[], int len);
void mostrarArrayInt(int numeros[], int len, int orden);


int main(void)
{
	setbuf(stdout, NULL);
	int bufferInt[SIZE];
	int resultadoSuma = 0;
	int opcion;

	inicializarArrayInt(bufferInt, SIZE);

	do
	{
		printf("Elija una opción: \n1. Cargar números \n2. Calcular suma \n3. Mostrar numeros en orden de ingreso \n4. Mostrar numeros en orden inversa al ingreso \n5. Salir \n");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case 1:

				cargarArrayInt(bufferInt, SIZE);
				break;
			case 2:
				resultadoSuma = sumarArrayInt(bufferInt, SIZE);
				printf("La suma de los numeros es: %d\n", resultadoSuma);
				break;
			case 3:
				mostrarArrayInt(bufferInt, SIZE, DIRECT);
				break;
			case 4:
				mostrarArrayInt(bufferInt, SIZE, INVESTED);
				break;
		}

	}while(opcion!=5);

	return EXIT_SUCCESS;
}

void inicializarArrayInt(int numeros[], int len)
{
	int i;

	for(i=0; i<len; i++)
	{
		numeros[i] = 0;
	}
}

void cargarArrayInt(int numeros[], int len)
{
	int i;

	for(i=0; i<len; i++)
	{
		printf("Ingrese un numero entero: \n");
		scanf("%d", &numeros[i]);
	}
}

int sumarArrayInt(int numeros[], int len)
{
	int i;
	int resultado = 0;

	for(i=0; i<len; i++)
	{
		resultado = resultado + numeros[i];
	}

	return resultado;
}

void mostrarArrayInt(int numeros[], int len, int orden)
{
	int i;

	switch(orden)
	{
		case 1:
			printf("En orden de ingreso:\n");
			for(i=0; i<len; i++)
			{
				printf("%d\n", numeros[i]);
			}
			break;
		case -1:
			printf("En orden inverso al ingreso:\n");
			for(i=len-1; i>-1; i--)
			{
				printf("%d\n", numeros[i]);
			}
	}
}
