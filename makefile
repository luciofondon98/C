ejecucion: navidad
	./navidad

navidad: navidad.o polinomio.o main.o
	gcc polinomio.o navidad.o main.o -o navidad

polinomio.o: polinomio.c polinomio.h
	gcc -c polinomio.c -Wall

navidad.o: navidad.c navidad.h
	gcc -c navidad.c -Wall

main.o: main.c
	gcc -c main.c -Wall

clear:
	rm navidad polinomio.o navidad.o main.o
