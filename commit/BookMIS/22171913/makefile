test:main.o Loading.o Searchbook.o Addbook.o Changebook.o Deletebook.o Showbook.o Countbook.o 
	gcc -o test main.c Loading.c Searchbook.c Addbook.c Changebook.c Deletebook.c Showbook.c Countbook.c  
main.o:main.c head.h
	gcc -c main.c
Loading.o:Loading.c head.h
	gcc -c Loading.c
Searchbook.o:Searchbook.c head.h
	gcc -c Searchbook.c
Addbook.o:Addbook.c head.h
	gcc -c Addbook.c
Changebook.o:Changebook.c head.h
	gcc -c Changebook.c
Deletebook.o:Deletebook.c head.h
	gcc -c Deletebook.c
Showbook.o:Showbook.c head.h
	gcc -c Showbook.c
Countbook.o:Countbook.c head.h
	gcc -c Countbook.c
clean:
	rm test main.o Searchbook.o Addbook.o Changebook.o Deletebook.o Showbook.o Countbook.o 
