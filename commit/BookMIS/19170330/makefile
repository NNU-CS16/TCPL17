all: BMIS.o gyh.o
	gcc -o all BMIS.o gyh.o
BMIS.o: BMIS.c gyh.h
	gcc -c BMIS.c
gyh.o: gyh.c gyh.h
	gcc -c gyh.c
clean:
	rm BMIS.o gyh.o
