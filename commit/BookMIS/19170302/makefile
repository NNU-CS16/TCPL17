main :head.h main.o creat.o search.o keywordsearch.o writersearch.o ISBNsearch.o insert.o update.o delete.o print.o report.o
	cc -o main -g head.h main.o creat.o search.o keywordsearch.o writersearch.o ISBNsearch.o insert.o update.o delete.o print.o report.o
main.o :main.c head.h
	cc -c -g main.c
creat.o:creat.c head.h
	cc -c -g creat.c
search.o:search.c head.h
	cc -c -g search.c
insert.o:insert.c head.h
	cc -c -g insert.c
update.o:update.c head.h
	cc -c -g update.c
delete.o:delete.c head.h
	cc -c -g delete.c
print.o:print.c head.h
	cc -c -g print.c
report.o:report.c head.h
	cc -c -g report.c
keywordsearch.o:keywordsearch.c head.h
	cc -c -g keywordsearch.c
writersearch.o:writersearch.c head.h
	cc -c -g writersearch.c
ISBNsearch.o:ISBNsearch.c head.h
	cc -c -g ISBNsearch.c
clean:rm main head.h main.o creat.o search.o insert.o update.o delete.o print.o report.o keywordsearch.o writersearch.o ISBNsearch.o
