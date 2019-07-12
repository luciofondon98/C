#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "polinomio.h"
#include "navidad.h"

int main(){
    FILE* cartas = fopen("cartas.txt","r");
    creacionRegalos(cartas);
    fclose(cartas);
    return 0;
}
