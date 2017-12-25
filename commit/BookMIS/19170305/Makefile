objects=main.o search.o threesearch.o add.o revise.o print.o count.o fcount.o delete.o readandwrite.o chain.o
BMS: $(objects)
	cc -o BMS $(objects)
main.o:main.c function.h search.c add.c revise.c print.c count.c delete.c
	cc -c main.c
search.o:search.c threesearch.h function.h chain.h readandwrite.h
	cc -c search.c
threesearch.o:threesearch.c threesearch.h
	cc -c threesearch.c
add.o:add.c chain.h readandwrite.h function.h
	cc -c add.c
revise.o:revise.c chain.h readandwrite.h function.h
	cc -c revise.c
print.o:print.c chain.h readandwrite.h function.h
	cc -c print.c
count.o:count.c fcount.h function.h
	cc -c count.c
fcount.o:fcount.c fcount.h chain.h readandwrite.h
	cc -c fcount.c
delete.o:delete.c chain.h readandwrite.h function.h
	cc -c delete.c
readandwrite.o:readandwrite.c readandwrite.h chain.h
	cc -c readandwrite.c
chain.o:chain.c chain.h
	cc -c chain.c
.PHONY:clean
clean:
	rm BMS $(objects)
