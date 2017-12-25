bims :print.o addbook.o authornamedic.o bms.o deletebook.o finishprogram.o keyworddic.o head.h searchbyauthor.o searchbyisbn.o searchbykeyword.o
	cc -o bims -g print.o addbook.o authornamedic.o bms.o deletebook.o finishprogram.o keyworddic.o head.h searchbyauthor.o searchbyisbn.o searchbykeyword.o
addbook.o :addbook.c head.h
	cc -c -g addbook.c
authornamedic.o :authornamedic.c head.h
	cc -c -g authornamedic.c
bms.o :bms.c head.h
	cc -c -g bms.c
deletebook.o :deletebook.c head.h
	cc -c -g deletebook.c
finishprogram.o :finishprogram.c head.h
	cc -c -g finishprogram.c
keyworddic.o :keyworddic.c head.h
	cc -c -g keyworddic.c
searchbyauthor.o :searchbyauthor.c head.h
	cc -c -g searchbyauthor.c
searchbyisbn.o :searchbyisbn.c head.h
	cc -c -g searchbyisbn.c
searchbykeyword.o :searchbykeyword.c head.h
	cc -c -g searchbykeyword.c
printf.o :print.c head.h
	cc -c -g print.c
clean:
	rm bims print.o addbook.o authornamedic.o bms.o deletebook.o finishprogram.o keyworddic.o searchbyauthor.o searchbyisbn.o searchbykeyword.o
