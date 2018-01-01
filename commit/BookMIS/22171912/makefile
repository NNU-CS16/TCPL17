test: main.o search.o delete.o add.o show.o load.o count.o modify.o
	sudo gcc -o main.o search.o delete.o add.o show.o load.o count.o modify.o
main.o: main.c overall.h
	sudo gcc -c main.c
search.o: search.c overall.h
	sudo gcc -c search.c
delete.o: delete.c overall.h
	sudo gcc -c delete.c
add.o: add.c overall.h
	sudo gcc -c add.c
show.o: show.c overall.h
	sudo gcc -c show.c
load.o: load.c overall.h
	sudo gcc -c load.c
count.o: count.c overall.h
	sudo gcc -c count.c
modify.o: modify.c overall.h
	sudo gcc -c modify.c
clean:
	rm main.o search.o delete.o add.o show.o load.o count.o modify.o
