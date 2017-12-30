kyh :main.o save.o addbook.o loadbook.o search.o modify.o display.o statistics.o deletebook.o
	cc -o kyh main.o save.o addbook.o loadbook.o search.o modify.o display.o statistics.o deletebook.o      
main.o :main.c kyh.h
	cc -c main.c 
addbook.o:addbook.c kyh.h
	cc -c addbook.c 
save.o:save.c kyh.h
	cc -c save.c 
loadbook.o:loadbook.c kyh.h
	cc -c loadbook.c
search.o:search.c kyh.h
	cc -c search.c 
modify.o:modify.c kyh.h
	cc -c modify.c 
display.o:display.c kyh.h
	cc -c display.c 
deletebook.o:deletebook.c kyh.h
	cc -c deletebook.c 
statistics.o:statistics.c kyh.h
	cc -c statistics.c 
clean:
	rm kyh main.o addbook.o save.o loadbook.o search.o modify.o displau.o deletebook.o statistics.o 
