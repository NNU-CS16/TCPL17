
main:main.c link.o add.o check.o seek.o del.o amend.o stat.o
	gcc main.c link.c add.c check.c seek.c del.c amend.c stat.c -o main

link.o:link.c
	gcc -c link.c

add.o:add.c
	gcc -c add.c

check.o:check.c
	gcc -c check.c

seek.o:seek.c
	gcc -c seek.c

del.o:del.c
	gcc -c del.c

amend.o:amend.c
	gcc -c amend.c

stat.o:stat.c
	gcc -c stat.c

clean:
	rm *.o main
