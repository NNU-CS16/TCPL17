edit: head.h main.o search.o delete.o insert.o output.o loadarray.o report.o update.o
	sudo gcc -o edit -g head.h main.o search.o delete.o insert.o output.o loadarray.o report.o update.o
main.o: main.c head.h
	sudo gcc -c -g main.c
search.o: search.c head.h
	sudo gcc -c -g search.c
delete.o: delete.c head.h
	sudo gcc -c -g delete.c
insert.o: insert.c head.h
	sudo gcc -c -g insert.c
output.o: output.c head.h
	sudo gcc -c -g output.c
loadarray.o: loadarray.c head.h
	sudo gcc -c -g loadarray.c
report.o: report.c head.h
	sudo gcc -c -g report.c
update.o: update.c head.h
	sudo gcc -c -g update.c
clean:
	rm edit head.h main.o search.o delete.o insert.o output.o loadarray.o report.o update.o
