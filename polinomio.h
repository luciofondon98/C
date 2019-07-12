/*polinomio.h*/


typedef struct{
    float variable;
    int exponente;
	char auxiliar;
}polinomio;

/*
Nombre         	evalpol
Parametros     	polinimio* poli, int n
Retorno        	int resultado
Descripcion		La funcion recibe el monomio del polinomio y lo evalua. Para
				ello, multiplica el entero n a si mismo la cantidad de veces
				que se encuentre en exponente de poli. Luego multiplica ese valor por
				el coeficiente de poli. Al final retorna el resultado (OJO que esta
				funcion solo sirve para un monomio, para que se utilize en todo el
				polinomio se debe hacer un for con la cantidad de monomios del polinomio)
				El lucio no hizo el cant y estuvimos una hora intentando que la custion funcionara.
*/
int evalpol(polinomio* poli, int n);

/*
Nombre         	integrar
Parametros     	int n
Retorno        	vacio
Descripcion		La funcion integrar integra el monomio del polinomio de una funcion lineal.
				Para ello, le suma uno al exponente del polinomio y luego divide el coeficiente por
				el exponente modificado. La funcion no retorna nada, solo reescribe los
				valores del struct polinomio.
				El lucio no hizo el cant y estuvimos una hora intentando que la custion funcionara.
*/
void integrar(polinomio* poli);

/*
Nombre         	derivar
Parametros     	int n
Retorno        	vacio
Descripcion		La funcion derivar deriva el monomio del polinomio de una funcion lineal.
				Para ello, le resta uno al exponente del polinomio y luego el coeficiente por
				el exponente antes de ser modificado. La funcion no retorna nada, solo reescribe los
				valores del struct polinomio.
				El lucio no hizo el cant y estuvimos una hora intentando que la custion funcionara.
*/
void derivar(polinomio* poli);

/*
Nombre         	accion
Parametros     	void (*deit)(polinomio*),polinomio* poli
Retorno        	vacio
Descripcion		La funcion accion toma el polinomio y le aplica la funcion integrar o derivar
				de forma correspondiente.
				El lucio no hizo el cant y estuvimos una hora intentando que la custion funcionara.
*/
void* accion(void (*deit)(polinomio*),polinomio* poli);
