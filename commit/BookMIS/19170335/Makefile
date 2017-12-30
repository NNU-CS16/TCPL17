bims : main.o cmd.h search.o add.o delete.o update.o listall.o report.o read.o keep.o
	cc -o bims -g main.o cmd.h search.o add.o delete.o update.o listall.o report.o read.o keep.o
main.o : main.c cmd.h
	cc -c -g main.c
search.o : search.c cmd.h
	cc -c -g search.c
add.o : add.c cmd.h
	cc -c -g add.c
delete.o : delete.c cmd.h
	cc -c -g delete.c
update.o : update.c cmd.h
	cc -c -g update.c
listall.o :listall.c cmd.h
	cc -c -g listall.c
report.o : report.c cmd.h
	cc -c -g report.c
read.o : read.c cmd.h
	cc -c -g read.c
keep.o : keep.c cmd.h
	cc -c -g keep.c
clean :
	rm bims main.o search.o add.o delete.o update.o listall.o report.o read.o keep.o 

