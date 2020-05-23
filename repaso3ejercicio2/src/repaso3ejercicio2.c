/*
 ============================================================================
 Name        : repaso3ejercicio2.c
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

#define SIZE 5
#define INTMIN -100
#define INTMAX 100
#define INVESTED -1
#define DIRECT 1

int main(void)
{
	setbuf(stdout, NULL);
	int bufferInt[SIZE];
	int opcion;
	char mensajeDeIngreso[] = "Ingrese numero entre -100 y 100: ";
	char mensajeDeError[]= "Debe ingresar numero válido (-100 a 100): ";
	int totalPositivos;
	int totalNegativos;
	float totalPromedio;
	int positivoMax;

	inicializarArrayInt(bufferInt, SIZE);

	do
	{
		printf("Elija una opción: \n1. Cargar números \n2. Mostrar numeros positivos \n3. Mostrar numeros negativos \n");
		printf("4. Mostrar promedio de numeros \n5. Mostrar el maximo de los positivos ingresados \n6. Salir \n");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case 1:
				cargarArrayInt(bufferInt, mensajeDeIngreso, mensajeDeError, INTMIN, INTMAX, SIZE);
				break;
			case 2:
				totalPositivos = esPositivoArrayInt(bufferInt, SIZE, &positivoMax);
				printf("La cantidad de numeros positivos es: %d\n", totalPositivos);
				break;
			case 3:
				totalNegativos = esNegativoArrayInt(bufferInt, SIZE);
				printf("La cantidad de numeros negativos es: %d\n", totalNegativos);
				break;
			case 4:
				totalPromedio = promediarArrayInt(bufferInt, SIZE);
				printf("El promedio de los numeros ingresados es: %f\n", totalPromedio);
				break;
			case 5:
				printf("El maximo de los positivos es: %d\n", positivoMax);
				break;
		}

	}while(opcion!=6);

	return EXIT_SUCCESS;
}
