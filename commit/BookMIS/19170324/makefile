edit: book.h main.o book.o
	cc -o edit main.o book.o
main.o:main.c book.h	
	cc -c main.c
book.o:book.c book.h
	cc -c book.c
clean:
	rm edit book.h main.o book.o
