main :communal.h main.o read.o query.o add.o amend.o delete.o display.o stat.o
	cc - o main -g communal.h main.o read.o query.o add.o amend.o delete.o display.o stat.o
main.o :main.c communal.h
	cc -c -g main.c
read.o :read.c communal.h
	cc -c -g read.c
query.o :query.c communal.h
	cc -c -g query.c
add.o :add.c communal.h
	cc -c -g add.c
amend.o :amend.c communal.h
	cc -c -g amend.c
delete.o :delete.c communal.h
	cc -c -g delete.c
display.o :display.c communal.h
	cc -c -g display.c
stat.o :stat.c communal.h
	cc -c -g stat.c
clean :rm main communal.h main.o read.o query.o add.o amend.o delete.o display.o stat.o
