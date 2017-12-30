fsx : bookmis.o main.o function.o
	cc -o fsx main.o bookmis.o function.o
bookmis.o : bookmis.c bookmis.h
	cc -c bookmis.c
main.o : main.c bookmis.h
	cc -c main.c
function.o : function.c bookmis.h
	cc -c function.c
.PHONY : clean

clean :
	-rm fsx main.o bookmis.o
