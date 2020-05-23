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
 b. int esPositivo(int) retorna 1 en caso de que el n�mero recibido como par�metro sea positivo, 0 en caso contrario.
 c. float promediarNumeros(int,int): recibe el acumulador y el contador de n�meros y retorna el promedio.
 Crear estas funciones dentro de una biblioteca llamada �Repaso2�.
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
            printf("Debe ingresar numero v�lido (-100 a 100): \n");
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

        printf("�Desea ingresar otro numero? (s/n): ");
        fflush(stdin);
        scanf("%c", &respuesta);
        printf("\n_________________________________\n");

    }while(respuesta=='s' || respuesta=='S');

    promedio= (float)acumulador / (contadorPositivos + contadorNegativos);
    promedioPositivos= (float)acumuladorPositivos / contadorPositivos;

    printf("La cantidad de positivos es: %d \nLa cantidad de negativos es: %d \nEl promedio del enteros es: %f \nEl promedio de positivos es: %f", contadorPositivos, contadorNegativos, promedio, promedioPositivos);
    return 0;
}
