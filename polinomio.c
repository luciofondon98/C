#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "polinomio.h"

int evalpol(polinomio* poli, int n){
	float var = poli->variable;
	int i,res = 1, cant=poli->exponente;
	float resultado;
	for (i=0;i<cant;i++){
		res = res*n;
	}
	resultado = res*var;
	return resultado;
}

void integrar(polinomio* poli){
	float cant = poli->variable;
	int exp = poli->exponente;

	poli->variable = cant/(float)(exp+1);
	poli->exponente = exp+1;
}

void derivar(polinomio* poli){
	float cant = poli->variable;
	int exp = poli->exponente;

	poli->variable = cant * exp;
	poli->exponente = exp-1;
}

void* accion(void(*deit)(polinomio*),polinomio* poli){
    deit(poli);
    return poli;
}
