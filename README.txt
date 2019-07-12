Integrantes:
Luis Elicer Krause,	rol: 201773513-9
Lucio Fondon, 		rol: 201773610-0
Paralelo 200

Instrucciones para utilizar la tarea:
1- Instalar gcc
2- Abrir la terminal y entrar a la ubicación de la carpeta con los archivos en cuestión.
   La carpeta debe contener 7 archivos, los cuales deben tener si o si los siguientes nombres:

	navidad.h: Header con las funciones de navidad.c
	navidad.c: Codigo principal con las funciones declaradas de navidad.h
	polinomio.h: Header con la función polinomio. Esta función debe llamarse polinomio para evitar errores.
	polinomio.c: Codigo con la definición de la función polinomio declarada en polinomio.h, la funcion comienza con:

		#include "polinomio.h"
		typedef struct{
		    float variable;
		    int exponente;
			char auxiliar;
		}polinomio;

	main.c: Codigo donde se define la funcion main en donde se utilizan las funciones importadas por
		polinomio.h y navidad.h. El archivo debe comenzar con:

		#include "polinomio.h"
		#include "navidad.h"

	makefile: Archivo que contiene las reglas de compilacion.
	README.txt: archivo de texto con instrucciones para correr la tarea. 

4- Una vez abierta la carpeta en la terminal, se deben realizar los siguientes pasos para compilar los archivos:

	En la terminal, escribir el siguiente comando:

	$ make

	Este comando crea 4 archivos nuevos, main.o, fun.o, genetico.o y el ejecutable genetico.
	Para borrar los archivos creados y reiniciar la compilacion, ejecutar en la terminal:

	$ make clear
