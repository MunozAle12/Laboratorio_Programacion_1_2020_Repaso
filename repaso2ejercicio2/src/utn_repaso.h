/*
 * utn_repaso.h
 *
 *  Created on: 8 abr. 2020
 *      Author: Usuario
 */

#ifndef UTN_REPASO_H_
#define UTN_REPASO_H_

int getInt(char mensaje[], char mensajeError[], int enteroMin, int enteroMax);	//Función que valida el ingreso de un numero entero entre -100 y 100
int esPositivo(int validarEnteroPositivo);	//Función que valida y retorna 0 si es entero positivo, 1 si es entero negativo.
float promediarNumeros(int acumuladorTotalEnteros, int contadorTotalEnteros);	//Función que calcula el promedio de los numeros enteros ingresados


#endif /* UTN_REPASO_H_ */
