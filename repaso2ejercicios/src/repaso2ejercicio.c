/*
 ============================================================================
 Name        : repaso2ejercicio1.c
 Author      : Ale Muñoz
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 EJERCICIO 1:
 Ingresar números hasta que el usuario lo decida. Los números tienen que estar
 comprendidos entre -100 y 100. Determinar:
 a. Cantidad de números positivos.
 b. Cantidad de números negativos.
 c. Promedio de números.
 d. De los positivos el máximo.

 EJERCICIO 2:
 Aplicar las siguientes funciones:
 a. int getInt(char[], char[], int, int) para el ingreso y validación de datos de tipo entero.
 b. int esPositivo(int) retorna 1 en caso de que el número recibido como parámetro sea positivo, 0 en caso contrario.
 c. float promediarNumeros(int,int): recibe el acumulador y el contador de números y retorna el promedio.
 Crear estas funciones dentro de una biblioteca llamada “Repaso2”.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
    int bufferInt;
    int contadorPositivos = 0;
    int contadorNegativos = 0;
    int acumuladorPositivos = 0;
    int acumulador = 0;
    float promedio;
    float promedioPositivos;
    char respuesta;

    do
    {
        printf("Ingrese numero entre -100 y 100: ");
        fflush(stdin);
        scanf("%d", &bufferInt);
        printf("\n_________________________________\n");

        while(bufferInt<-100 || bufferInt>100)
        {
            printf("Debe ingresar numero válido (-100 a 100): \n");
            fflush(stdin);
            scanf("%d", &bufferInt);
            printf("\n_________________________________\n");
        }

        if(bufferInt>0)
        {
            contadorPositivos++;
            acumuladorPositivos= acumuladorPositivos + bufferInt;
        }
        else
        {
            contadorNegativos++;
        }

        acumulador= acumulador + bufferInt;

        printf("¿Desea ingresar otro numero? (s/n): ");
        fflush(stdin);
        scanf("%c", &respuesta);
        printf("\n_________________________________\n");

    }while(respuesta=='s' || respuesta=='S');

    promedio= (float)acumulador / (contadorPositivos + contadorNegativos);
    promedioPositivos= (float)acumuladorPositivos / contadorPositivos;

    printf("La cantidad de positivos es: %d \nLa cantidad de negativos es: %d \nEl promedio del enteros es: %f \nEl promedio de positivos es: %f", contadorPositivos, contadorNegativos, promedio, promedioPositivos);
    return 0;
}
