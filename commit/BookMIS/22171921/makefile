main :head.h main.o read.o menu.o search.o add.o modify.o delete.o display.o statistics.o
	sudo gcc -o main -g head.h main.o read.o menu.o search.o add.o modify.o delete.o display.o statistics.o
main.o :main.c head.h
	sudo gcc -c -g main.c
read.o :read.c head.h
	sudo gcc -c -g read.c
search.o :search.c head.h
	sudo gcc -c -g search.c
add.o :add.c head.h
	sudo gcc -c -g add.c
modify.o :modify.c head.h
	sudo gcc -c -g modify.c
delete.o :delete.c head.h
	sudo gcc -c -g delete.c
display.o :display.c head.h
	sudo gcc -c -g display.c
statistics.o :statistics.c head.h
	sudo gcc -c -g statistics.c
menu.o :menu.c head.h
	sudo gcc -c -g menu.c
clean:
	rm main head.h main.o read.o menu.o search.o add.o modify.o delete.o display.o statistics.o

