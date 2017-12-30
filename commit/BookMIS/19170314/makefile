test:main.o search.o Update.o Add.o Delete.o InfoSta.o load.o save.o
	gcc main.o search.o Update.o Add.o Delete.o InfoSta.o load.o save.o -o test
	
main.o:main.c head.h
	gcc -c main.c  
head.o:search.c
	gcc -c search.c  
Update.o:Update.c 	
	gcc -c Update.c 
Add.o:Add.c
	gcc -c Add.c 
Delete.o:
	gcc -c Delete.c 
InfoSta.o:InfoSta.c
	gcc -c InfoSta.c 
load.o:load.c
	gcc -c load.c 
save.o:save.c
	gcc -c save.c 
clean:	
	-rm test main.o search.o Update.o Add.o Delete.o InfoSta.o load.o save.o
