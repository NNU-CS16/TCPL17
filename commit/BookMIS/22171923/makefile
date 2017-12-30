test:main.o add.o save.o loadBook.o search.o revise.o output.o InfoSta.o delete.o
	gcc main.o add.o save.o loadBook.o search.o revise.o output.o InfoSta.o delete.o -o test
main.o:main.c
	gcc -c main.c -o main.o
add.o:add.c
	gcc -c add.c -o add.o
save.o:save.c
	gcc -c save.c -o save.o
loadBook.o:loadBook.c
	gcc -c loadBook.c -o loadBook.o
search.o:search.c
	gcc -c search.c -o search.o
revise.o:revise.c
	gcc -c revise.c -o revise.o
output.o:output.c
	gcc -c output.c -o output.o
InfoSta.o:InfoSta.c
	gcc -c InfoSta.c -o InfoSta.o
delete.o:delete.c
	gcc -c delete.c -o delete.o
clean:
	rm test main.o add.o save.o loadBook.o search.o revise.o output.o InfoSta.o delete.o

