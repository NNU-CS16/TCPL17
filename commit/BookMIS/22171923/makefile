test:main.o add.o save.o loadBook.o search.o revise.o output.o InfoSta.o delete.o
	sudo gcc main.o add.o save.o loadBook.o search.o revise.o output.o InfoSta.o delete.o -o test
main.o:main.c
	sudo gcc -c main.c -o main.o
add.o:add.c
	sudo gcc -c add.c -o add.o
save.o:save.c
	sudo gcc -c save.c -o save.o
loadBook.o:loadBook.c
	sudo gcc -c loadBook.c -o loadBook.o
search.o:search.c
	sudo gcc -c search.c -o search.o
revise.o:revise.c
	sudo gcc -c revise.c -o revise.o
output.o:output.c
	sudo gcc -c output.c -o output.o
InfoSta.o:InfoSta.c
	sudo gcc -c InfoSta.c -o InfoSta.o
delete.o:delete.c
	sudo gcc -c delete.c -o delete.o
clean:
	rm test main.o add.o save.o loadBook.o search.o revise.o output.o InfoSta.o delete.o

