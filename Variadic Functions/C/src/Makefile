all: variadic

variadic: main.o func.o
	gcc main.o func.o -o variadic

main.o: main.c func.h
	gcc -c main.c

func.o: func.c
	gcc -c func.c

clean:
	rm *.o variadic
