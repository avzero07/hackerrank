all: permstring

permstring: main.o nextperm.o
	gcc main.o nextperm.o -o permstring

main.o: main.c nextperm.h
	gcc -c main.c

nextperm.o: nextperm.c
	gcc -c nextperm.c

clean:
	rm *.o permstring
