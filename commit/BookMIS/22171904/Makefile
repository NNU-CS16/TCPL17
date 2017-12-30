main:main.o cmd.o
	sudo gcc -o main main.o cmd.o -lm
main.o:main.c cmd.h
	sudo gcc -c main.c -lm
cmd.o:cmd.c cmd.h
	sudo gcc -c cmd.c -lm
.PHONY:clean
clean:
	sudo rm -rf *.o main

