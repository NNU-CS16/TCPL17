test: main.o insert.o load.o save.o search.o printf.o update.o delete.o tongji.o
	gcc -o test main.o insert.o load.o save.o search.o printf.o update.o delete.o tongji.o
main.o: main.c cmd.h
	gcc -c main.c
insert.o: insert.c cmd.h
	gcc -c insert.c
load.o: load.c cmd.h
	gcc -c load.c
save.o: save.c cmd.h
	gcc -c save.c
search.o: search.c cmd.h
	gcc -c search.c
printf.o: printf.c cmd.h
	gcc -c printf.c
update.o: update.c cmd.h
	gcc -c update.c
delete.o: delete.c cmd.h
	gcc -c delete.c
tongji.o: tongji.c cmd.h
	gcc -c tongji.c
clean: 
	rm test main.o load.o save.o insert.o search.o printf.o update.o delete.o tongji.c
