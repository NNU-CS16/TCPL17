main:main.o emmm.o
	sudo gcc -o main main.o emmm.o -lm
main.o:main.c emmm.h
	sudo gcc -c main.c -lm
emmm.o:emmm.c emmm.h
	sudo gcc -c emmm.c -lm 
.PHONY:clean
clean:
	sudo rm -rf *.o main 
