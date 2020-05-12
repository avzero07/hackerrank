all: calcmax

calcmax: main.o calcmax.o
	gcc main.o calcmax.o -o calcmax

main.o: main.c calcmax.h
	gcc -c main.c

calcmax.o: calcmax.c
	gcc -c calcmax.c

clean:
	rm *.o calcmax
