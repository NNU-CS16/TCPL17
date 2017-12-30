object = main.o loadchain.o SaveAs.o ShowBook.o Insert.o Search.o Delete.o Update.o Statistics.o
edit : $(object)
	cc -o edit $(object)
main.o : main.c head.h
	cc -c main.c
loadchain.o : loadchain.c head.h
	cc -c loadchain.c
SaveAs.o : SaveAs.c head.h
	cc -c  SaveAs.c
ShowBook.o : ShowBook.c head.h
	cc -c ShowBook.c
Insert.o : Insert.c head.h
	cc -c Insert.c
Search.o : Search.c head.h
	cc -c Search.c
Delete.o : Delete.c head.h Search.c
	cc -c Delete.c
Update.o : Update.c head.h Search.c
	cc -c Update.c
Statistics : Statistics.c head.h
	cc -c Statistics.c
clean :
	 rm edit $(object)
