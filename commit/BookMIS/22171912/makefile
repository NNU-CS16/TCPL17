test: main.o search.o delete.o add.o show.o load.o count.o modify.o
	cc -o main main.o search.o delete.o add.o show.o load.o count.o modify.o
main.o: main.c head.h
	cc -c main.c
search.o: search.c overall.h
	cc -c search.c
delete.o: delete.c overall.h
	cc -c delete.c
add.o: add.c overall.h
	cc -c add.c
show.o: show.c overall.h
	cc -c show.c
load.o: load.c overall.h
	cc -c load.c
count.o: count.c overall.h
	cc -c count.c
modify.o: modify.c overall.h
	cc -c modify.c
clean:
	rm main.o search.o delete.o add.o show.o load.o count.o modify.o
