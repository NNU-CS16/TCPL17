main:main.o alg.o
	sudo gcc -o main main.o alg.o -lm
main.o:main.c alg.h
	sudo gcc -c main.c -lm
alg.o:alg.c alg.h
	sudo gcc -c alg.c -lm
