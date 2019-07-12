/*navidad.h*/

/*
Nombre         	codigoUno
Parametros     	char* carta
Retorno        	vacio
Descripcion		La funcion codigoUno toma un string y lo decodifica,
				dependiendo del valor final que toma, el nombre y el
				codigo verificador, escribe en un texto el regalo correspondiente.
				La funcion no retorna nada.
				El lucio no hizo el cant y estuvimos una hora intentando que la custion funcionara.
*/
void* codigoUno(char* carta);

/*
Nombre         	codigoDos
Parametros     	char* carta
Retorno        	vacio
Descripcion		La funcion codigoDos toma un string y lo decodifica,
				dependiendo del valor final que toma, el nombre y el
				codigo verificador, escribe en un texto el regalo correspondiente.
				La funcion no retorna nada.
				El lucio no hizo el cant y estuvimos una hora intentando que la custion funcionara.
*/
void* codigoDos(char* carta);

/*
Nombre         	codigoTres
Parametros     	char* carta
Retorno        	vacio
Descripcion		La funcion codigoTres toma un string y lo decodifica,
				dependiendo del valor final que toma, el nombre y el
				codigo verificador, escribe en un texto el regalo correspondiente.
				La funcion no retorna nada.
				El lucio no hizo el cant y estuvimos una hora intentando que la custion funcionara.
*/
void* codigoTres(char* carta);

/*
Nombre         	codigoCuatro
Parametros     	char* carta
Retorno        	vacio
Descripcion		La funcion codigoCuatro toma un string y lo decodifica,
				dependiendo del valor final que toma, el nombre y el
				codigo verificador, escribe en un texto el regalo correspondiente.
				La funcion no retorna nada.
				El lucio no hizo el cant y estuvimos una hora intentando que la custion funcionara.
*/
void* codigoCuatro(char* carta);

/*
Nombre         	decodificacion
Parametros     	void* (*codigo)(char*),char* carta
Retorno        	vacio
Descripcion		La funcion decodificacion toma un numero del 1 al 4
				dependiendo del valor que tome, llamara a la funcion
				codigoUno, codigoDos, codigoTres o codigoCuatro.
				El lucio no hizo el cant y estuvimos una hora intentando que la custion funcionara.
*/
void* decodificacion(void* (*codigo)(char*),char* carta);

/*
Nombre         	creacionRegalos
Parametros     	FILE* cartas
Retorno        	vacio
Descripcion		La funcion creacion regalos toma todas las
				otras funciones y escribe en un nuevo txt los regalos
				correspondientes a cada nino.
				El lucio no hizo el cant y estuvimos una hora intentando que la custion funcionara.
*/
void creacionRegalos (FILE* cartas);
