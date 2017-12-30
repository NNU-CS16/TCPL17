main:system.h main.o read.o inquiry.o add.o change.o delete.o display.o count.o
	cc -o main -g system.h main.o read.o inquiry.o add.o change.o delete.o display.o count.o
main.o:main.c system.h
	cc -c -g main.c
read.o:read.c system.h
	cc -c -g read.c
inquiry.o:inquiry.c system.h
	cc -c -g inquiry.c
add.o:add.c system.h
	cc -c -g add.c
change.o:change.c system.h
	cc -c -g change.c
delete.o:delete.c system.h
	cc -c -g delete.c
display.o:display.c system.h
	cc -c -g display.c
count.o:count.c system.h
	cc -c -g count.c
clean:
	rm main system.h main.o read.o inquiry.o add.o change.o delete.o display.o count.o
