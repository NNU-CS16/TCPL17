main :head.h main.o function.o
	gcc -o main -g head.h main.o function.o
main.o :main.c 
	gcc -c -g main.c head.h interaction_interface.h
function.o :function.c head.h
	gcc -c -g function.c
clean:
