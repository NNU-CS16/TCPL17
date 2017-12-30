main:system.h main.o read.o quiry.o plus.o modify.o delete.o display.o sort.o
	
	gcc -o main -g system.h main.o read.o quiry.o plus.o modify.o delete.o display.o sort.o
main.o: main.c system.h
	gcc -c -g main.c
read.o: read.c system.h
	gcc -c -g read.c
quiry.o: quiry.c system.h
	gcc -c -g quiry.c
plus.o: plus.c system.h
	gcc -c -g plus.c
modify.o: modify.c system.h
	gcc -c -g modify.c
delete.o: delete.c system.h
	gcc -c -g delete.c
display.o: display.c system.h
	gcc -c -g display.c
sort.o: sort.c system.h
	gcc -c -g sort.c
clean:
	rm main system.h main.o read.o quiry.o plus.o modify.o delete.o display.o sort.o
