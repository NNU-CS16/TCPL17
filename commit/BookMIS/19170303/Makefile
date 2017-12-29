main: book.o cmd.o main.o book.o
	gcc -o main  main.o book.o cmd.o
book.o: book.c cmd.h
	gcc -c book.c
cmd.o: cmd.c cmd.h
	gcc -c cmd.c book.o
main.o: main.c cmd.h
	gcc -c main.c
