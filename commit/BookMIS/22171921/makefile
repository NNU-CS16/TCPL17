main :head.h main.o read.o search.o add.o modify.o delete.o display.o statistics.o
	cc -o main -g head.h main.o read.o search.o add.o modify.o delete.o display.o statistics.o
main.o :main.c head.h
	cc -c -g main.c
read.o :read.c head.h
	cc -c -g read.c
search.o :search.c head.h
	cc -c -g search.c
add.o :add.c head.h
	cc -c -g add.c
modify.o :modify.c head.h
	cc -c -g modify.c
delete.o :delete.c head.h
	cc -c -g delete.c
display.o :display.c head.h
	cc -c -g display.c
statistics.o :statistics.c head.h
	cc -c -g statistics.c
clean:
	rm main head.h main.o read.o search.o add.o modify.o delete.o display.o statistics.o

