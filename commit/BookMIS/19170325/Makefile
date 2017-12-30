all:main.o cmd.o
	gcc main.o cmd.o -o all
main.o:main.c
	gcc -c main.c -o main.o
add.o:cmd.c
	gcc -c cmd.c -o cmd.o
.PHONY:clean
clean:
	rm -rf *.o
