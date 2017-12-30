test:main.o add.o search.o delete.o account.o display.o file.o change.o 
	gcc main.o add.o search.o delete.o account.o display.o file.o change.o
main.o:main.c
	gcc -c main.c -o main.o
add.o:add.c
	gcc -c add.c -o add.o
save.o:search.c
	gcc -c search.c -o search.o
loadBook.o:delete.c
	gcc -c delete.c -o delete.o
search.o:account.c
	gcc -c account.c -o account.o
revise.o:display.c
	gcc -c display.c -o display.o
output.o:file.c
	gcc -c file.c -o file.o
InfoSta.o:change.c
	gcc -c change.c -o change.c
clean:
	rm test main.o add.o search.o delete.o account.o display.o file.o change.o
