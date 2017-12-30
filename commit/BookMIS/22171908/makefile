main :control.h main.o duqu.o inquiry.o add.o alter.o delete.o display.o count.o
	cc -o main -g control.h main.o duqu.o inquiry.o add.o alter.o delete.o display.o count.o
main.o :main.c control.h
	cc -c -g main.c
duqu.o :duqu.c control.h
	cc -c -g duqu.c
inquiry.o :inquiry.c control.h
	cc -c -g inquiry.c
add.o :add.c control.h
	cc -c -g add.c
alter.o :alter.c control.h
	cc -c -g alter.c
delete.o :delete.c control.h
	cc -c -g delete.c
display.o :display.c control.h
	cc -c -g display.c
count.o :count.c control.h
	cc -c -g count.c
clean:
	rm main control.h main.o duqu.o inquiry.o add.o alter.o delete.o display.o count.o
