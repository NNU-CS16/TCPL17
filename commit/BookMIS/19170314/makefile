test:main.o search.o Update.o Add.o Delete.o InfoSta.o load.o save.o
	gcc main.o search.o Update.o Add.o Delete.o InfoSta.o load.o save.o
	-o test
main.o:main.c head.h
	gcc -c main.c  
head.o:search.c
	gcc -c search.c  
Update.o:update.c	
	gcc Update.c -o Update.o
Add.o:Add.c
	gcc Add.c -o Add.o
Delete.o:
	gcc Delete.c -o Delete.o
InfoSta.o:InfoSta.c
	gcc InfoSta.c -o InfoSta.o
load.o:load.c
	gcc load.c -o load.o
save.o:save.c
	gcc save.c -o save.o
clean:	
	-rm test main.o search.o Update.o Add.o Delete.o InfoSta.o load.o save.o
