main: main.o search.o delete.o insert.o output.o loadarray.o report.o update.o
	cc -o main main.o search.o delete.o insert.o output.o loadarray.o report.o update.o
main.o: main.c head.h
	cc -c main.c
search.o: search.c head.h
	cc -c search.c
delete.o: delete.c head.h
	cc -c delete.c
insert.o: insert.c head.h
	cc -c insert.c
output.o: output.c head.h
	cc -c output.c
loadarray.o: loadarray.c head.h
	cc -c loadarray.c
report.o: report.c head.h
	cc -c report.c
update.o: update.c head.h
	cc -c update.c
clean:
	rm main.o search.o delete.o insert.o output.o loadarray.o report.o update.o
