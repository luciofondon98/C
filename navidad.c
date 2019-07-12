#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "polinomio.h"
#include "navidad.h"

typedef struct{
    int tipoDeCodificacion;
    void* carta;
}pedido;

typedef struct{
    void* nombre;
    void* regalo;
}regalos;

void* codigoUno(char* carta){
    char *regalo;
    char *nombre_nino = (char*)malloc(sizeof(char)*30);
    int entero,booleano;
    char letra;
    sscanf(carta,"%s %d %d %c",nombre_nino,&entero,&booleano,&letra);
    if (entero < 5){
      regalo = "Carbon";
    }
    else{
        if (booleano == 0){
            if (letra == 'A') regalo = "Tumanji";
            if (letra == 'B') regalo = "Comunopoly";
            if (letra == 'C') regalo = "Caracoles Y Dragones";
            if (letra == 'D') regalo = "ADIVINAKIEM";
            if (letra == 'E') regalo = "No Sabi Na";
            if (letra == 'F') regalo = "Dibuja Bien Porfa";
            if (letra == 'G') regalo = "PiumPium";
        }
        else{
            if (letra == 'A') regalo = "ContraAtaque: Ofensiva Global";
            if (letra == 'B') regalo = "Monstruos de Bolsillo";
            if (letra == 'C') regalo = "Mantengan la calma y nadie explotara";
            if (letra == 'D') regalo = "Pato Juego";
            if (letra == 'E') regalo = "Almas negras: Edicion Preparate para morir";
            if (letra == 'F') regalo = "HOLA HOLA! Club de literatura";
            if (letra == 'G') regalo = "Equipo de Fortaleza 2";
        }
    }
    regalos* retorno = (regalos*)malloc(sizeof(regalos));
    retorno->nombre =  nombre_nino;
    retorno->regalo = regalo;
    return(retorno);
}

void* codigoDos(char* carta){
  int entero,booleano;
  char* nombre_nino = (char*)malloc(sizeof(char)*100);
  char regalo[2];
  char* regalo_nino;
  int i = 0;
  while (carta[i]!= ' '){
      i++;
  }
  sscanf(carta,"%d",&entero);
  booleano = entero%10;
  entero = (entero - booleano)/10;
  int j = 0;
  while (i + 1  < strlen(carta)-3){
      nombre_nino[j] = carta[i+1];
      j++;
      i++;
  }
  regalo[0] = carta[i+1];
  regalo[1] = carta[i+2];
  if (entero > 5){
        regalo_nino = "Carbon";
  }
  else{
      if (booleano == 0){
          if (regalo[0] == 'A'){
              if (regalo[1] == 'A') regalo_nino = "LP Homeworks for dummies";
              else if (regalo[1] == 'B') regalo_nino = "Heartless";
              else if (regalo[1] == 'C') regalo_nino = "Fapelusho";
          }
          if (regalo[0] == 'B'){
              if (regalo[1] == 'A') regalo_nino = "Fairy Tales of Tomc";
              else if (regalo[1] == 'B') regalo_nino = "A Sad World";
              else if (regalo[1] == 'C') regalo_nino = "Game of Pointers";
          }
          if (regalo[0] == 'C'){
              if (regalo[1] == 'A') regalo_nino = "The Lord of The Ravs: The Fellowship of the LDS";
              else if (regalo[1] == 'B') regalo_nino = "The Chronicles of Cthonia";
              else if (regalo[1] == 'C') regalo_nino = "120: The end of Sansano";
          }
    }
     else{
         if (regalo[0] == 'A'){
             if (regalo[1] == 'A') regalo_nino = "Informatic Wars: LP Strikes back";
             else if (regalo[1] == 'B') regalo_nino = "Mate: You can (not) RAV";
             else if (regalo[1] == 'C') regalo_nino = "How to train your mechon 3";
         }
         if (regalo[0] == 'B'){
             if (regalo[1] == 'A') regalo_nino = "Mechon The Movie: I choose you!";
             else if (regalo[1] == 'B') regalo_nino = "Prolog: Endgame";
             else if (regalo[1] == 'C') regalo_nino = "Ifception";
         }
         if (regalo[0] == 'C'){
             if (regalo[1] == 'A') regalo_nino = "Program Ravsody";
             else if (regalo[1] == 'B') regalo_nino = "SantaMaria: The last RAVbender";
             else if (regalo[1] == 'C') regalo_nino = "LP Forever";
         }

     }
  }
  	regalos* retorno = (regalos*)malloc(sizeof(regalos));
  	retorno->nombre = nombre_nino;
  	retorno->regalo = regalo_nino;
  	return retorno;
}

void* codigoTres(char* carta){
	char *nombre_nino = (char*)malloc(sizeof(char)*100);
    char* regalo_nino;
    char letra1,letra2,booleano;
    letra1 = carta[0];
    letra2 = carta[1];
    int i = 3;
    while(carta[i]!=' '){
        nombre_nino[i-3] = carta[i];
        i++;
    }
    booleano = carta[i+1] -'0';
    if (booleano != 0) regalo_nino = "Carbon";
    else{
        if (letra1 == 'A'){
            if (letra2 == '0') regalo_nino = "Arma de Ponys";
            if (letra2 == '1') regalo_nino = "Arma de Ricardo Milos";
            if (letra2 == '2') regalo_nino = "Arma de Lagrimas de Sansanos";
            if (letra2 == '3') regalo_nino = "Arma de Gah, el supermodelo noruego";
          }
        if (letra1 == 'B'){
            if (letra2 == '0') regalo_nino = "Vaca Lechera de Ponys";
            if (letra2 == '1') regalo_nino = "Vaca Lechera de Ricardo Milos";
            if (letra2 == '2') regalo_nino = "Vaca Lechera de Sansanos";
            if (letra2 == '3') regalo_nino = "Vaca Lechera de Gah, el supermodelo";
          }
        if (letra1 == 'C'){
            if (letra2 == '0') regalo_nino = "Figura tamano real de Ponys";
            if (letra2 == '1') regalo_nino = "Figura tamano real de Ricardo Milos";
            if (letra2 == '2') regalo_nino = "Figura tamano real de Sansanos";
            if (letra2 == '3') regalo_nino = "Figura tamano real de Gah, el supermodelo";
          }
        if (letra1 == 'D'){
            if (letra2 == '0') regalo_nino = "Invitacion al cabaret de Ponys";
            if (letra2 == '1') regalo_nino = "Invitacion al cabaret de Ricardo Milos";
            if (letra2 == '2') regalo_nino = "Invitacion al cabaret de Sansanos";
            if (letra2 == '3') regalo_nino = "Invitacion al cabaret de Gah, el supermodelo";
          }
        if (letra1 == '0'){
            if (letra2 == 'A') regalo_nino = "Pastelito de Chimuelo";
            if (letra2 == 'B') regalo_nino = "Pastelito de Amor, compasion y ternura";
            if (letra2 == 'C') regalo_nino = "Pastelito de Calcetin con rombosman";
            if (letra2 == 'D') regalo_nino = "Pastelito de Tecojobichi Sensei y Kunashgi";
          }
        if (letra1 == '1'){
            if (letra2 == 'A') regalo_nino = "Video prohibido de Chimuelo;";
            if (letra2 == 'B') regalo_nino = "Video prohibido de Amor, compasion y ternura";
            if (letra2 == 'C') regalo_nino = "Video prohibido de Calcetim con rombosman";
            if (letra2 == 'D') regalo_nino = "Video prohibido de Tecojobichi Sensei y Kunashgi";
          }
        if (letra1 == '2'){
            if (letra2 == 'A') regalo_nino = "Gigante pedazo de Ponys";
            if (letra2 == 'B') regalo_nino = "Gigante pedazo de Ricardo Milos";
            if (letra2 == 'C') regalo_nino = "Gigante pedazo de Lagrimas de Sansanos";
            if (letra2 == 'D') regalo_nino = "Gigante pedazo de Gah, el supermodelo noruego";
          }
        if (letra1 == '3'){
            if (letra2 == 'A') regalo_nino = "Almuerzo con Ponys";
            if (letra2 == 'B') regalo_nino = "Almuerzo con Ricardo Milos";
            if (letra2 == 'C') regalo_nino = "Almuerzo con Lagrimas de Sansanos";
            if (letra2 == 'D') regalo_nino = "Almuerzo con Gah, el supermodelo noruego";
          }
      }
      regalos* retorno = (regalos*)malloc(sizeof(regalos));
      retorno->nombre = nombre_nino;
      retorno->regalo = regalo_nino;
      return(retorno);
}

void* codigoCuatro(char* carta){
    char *nombre_nino = (char*)malloc(sizeof(char)*50);
    int l=0,caca = 0;
    char coef[10];
    int i = 0;
    int j = 0;
    int booleano;
    int entero;
    int cant;
    sscanf(carta,"%d %d %d",&booleano,&entero,&cant);
    polinomio** poli  = (polinomio** )malloc(sizeof(polinomio*)*cant);
    for (i = 0; i < cant; i++) poli[i] = (polinomio*)malloc(sizeof(polinomio));
    i = 0;
    int cont_espacios = 0;
    while (cont_espacios != 3){
        if (carta[i]==' ') cont_espacios+=1;
        i++;
    }
    cont_espacios = 0;
    for (j = i; cont_espacios < cant; j++){
        if (carta[j] != ' '){
            coef[l]=carta[j];
            l+=1;
        }
        else if (carta[j] == ' '){
            l = 0;
			caca = atoi(coef);
			poli[cont_espacios]->variable = caca;
            poli[cont_espacios]->exponente= cont_espacios;
			cont_espacios = cont_espacios+1;
		}
    }
    int pos_carta = j;
    int n1=0;
    for (i = 0; i < cant; i++){
        n1 += evalpol(poli[i],entero);
    }

    for (i = 0; i < cant; i++){
        if (booleano == 0) accion(integrar,poli[i]);
        else if (booleano == 1) accion(derivar,poli[i]);
    }
    int n2=0;
    for (i = 0; i < cant; i++){
        n2 += evalpol(poli[i],entero);
    }
    int resultado_final;
    i = 0;
    resultado_final = (n1 * n2) % 10;
    while(carta[pos_carta]!= '\n'){
        nombre_nino[i] = carta[pos_carta];
        pos_carta++;
        i++;
    }
    char* regalo_nino;
    regalos* retorno = (regalos*)malloc(sizeof(regalos));
    if (resultado_final == 0) regalo_nino = "Tarea de Java";
    if (resultado_final == 1) regalo_nino = "Control de Gamecircle";
    if (resultado_final == 2) regalo_nino = "Exploding Doggos";
    if (resultado_final == 3) regalo_nino = "Coleccion de los hombres musculosos";
    if (resultado_final == 4) regalo_nino = "Telefono de ultima generacion PEAR";
    if (resultado_final == 5) regalo_nino = "Caja Misteriosa";
    if (resultado_final == 6) regalo_nino = "F.L.U.D.D";
    if (resultado_final == 7) regalo_nino = "Mechon";
    if (resultado_final == 8) regalo_nino = "Un sueno";
    if (resultado_final == 9) regalo_nino = "Un 100 en la tarea de C";
    retorno->nombre = nombre_nino;
    retorno->regalo = regalo_nino;
    for (i = 0; i < cant; i++) free(poli[i]);
    free(poli);
    return retorno;
}

void* decodificacion(void* (*codigo)(char*),char* carta){
    regalos* presente;
    presente = codigo(carta);
    return presente;
}

void creacionRegalos (FILE* cartas){
    FILE* retorno = fopen("regalos.txt","w");
    int cant_pedidos;
    int i;
    char* linea = (char*)malloc(sizeof(char)*10000);
    fscanf(cartas,"%d\n",&cant_pedidos);
    pedido* pedidos = malloc(sizeof(pedido)*cant_pedidos);
    regalos** regalos_ninos = malloc(sizeof(regalos*)*cant_pedidos);
    int codificacion;
    for (i = 0; i < cant_pedidos; i++) {
        fscanf(cartas,"%d\n",&codificacion);
        pedidos[i].tipoDeCodificacion = codificacion;
        fgets(linea,1000,cartas);
        pedidos[i].carta = linea;
        if (pedidos[i].tipoDeCodificacion == 1){
            regalos_ninos[i]= (regalos*)decodificacion(codigoUno,(char*)pedidos[i].carta);
            fprintf(retorno,"%s %s\n",(char*)regalos_ninos[i]->nombre,(char*)regalos_ninos[i]->regalo);
        }
        if (pedidos[i].tipoDeCodificacion == 2){
            regalos_ninos[i]= (regalos*)decodificacion(codigoDos,(char*)pedidos[i].carta);
            fprintf(retorno,"%s %s\n",(char*)regalos_ninos[i]->nombre,(char*)regalos_ninos[i]->regalo);
        }
        if (pedidos[i].tipoDeCodificacion == 3){
            regalos_ninos[i]= (regalos*)decodificacion(codigoTres,(char*)pedidos[i].carta);
            fprintf(retorno,"%s %s\n",(char*)regalos_ninos[i]->nombre,(char*)regalos_ninos[i]->regalo);
        }
        if (pedidos[i].tipoDeCodificacion == 4){
            regalos_ninos[i]= (regalos*)decodificacion(codigoCuatro,(char*)pedidos[i].carta);
            fprintf(retorno,"%s %s\n",(char*)regalos_ninos[i]->nombre,(char*)regalos_ninos[i]->regalo);

        }
    }
    fclose(retorno);
    free(pedidos);
    for (i = 0; i < cant_pedidos; i++){
        free(regalos_ninos[i]->nombre);
        free(regalos_ninos[i]);
    }
    free(regalos_ninos);
    free(linea);
}
