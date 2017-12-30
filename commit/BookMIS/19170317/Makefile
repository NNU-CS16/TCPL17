edit : BookMIS.o LoadArray.o Search.o Add.o Modify.o \
		Delete.o Show.o Count.o
		cc -o edit BookMIS.o LoadArray.o Search.o Add.o\
			Modify.o Delete.o Show.o Count.o

BookMIS.o : BookMIS.c main.h
		cc -c BookMIS.c
LoadArray.o : LoadArray.c main.h 
		cc -c LoadArray.c
Search.o : Search.c main.h
		cc -c Search.c
Add.o : Add.c main.h
		cc -c Add.c
Modify.o : Modify.c main.h
		cc -c Modify.c
Delete.o : Delete.c main.h
		cc -c Delete.c
Show.o : Show.c main.h
		cc -c Show.c
Count.o : Count.c main.h
		cc -c Count.c

clean :
	rm edit BookMIS.o LoadArray.o Search.o Add.o\
		Modify.o Delete.o Show.o Count.o
