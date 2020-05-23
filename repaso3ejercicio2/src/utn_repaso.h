/*
 * utn_repaso.h
 *
 *  Created on: 8 abr. 2020
 *      Author: Usuario
 */

#ifndef UTN_REPASO_H_
#define UTN_REPASO_H_

void inicializarArrayInt(int numeros[], int len);	//Inicializo los valores de los subindices del array.
void cargarArrayInt(int ArrayInt[], char mensaje[], char mensajeError[], int enteroMin, int enteroMax, int len);	//Cargo y valido valores entre -100 y 100 los subindices del array.
int esPositivoArrayInt(int arrayInt[], int len, int* pPositivoMax);	//Función que retorna cantidad de enteros positivos.
int esNegativoArrayInt(int arrayInt[], int len);	//Función que retorna cantidad de enteros negativos.
float promediarArrayInt(int arrayInt[], int len);	//Función que calcula y retorna el promedio de los numeros enteros ingresados.

#endif /* UTN_REPASO_H_ */
