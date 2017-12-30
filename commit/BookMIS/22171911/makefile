test:main.o load.o chaxun.o shanchu.o tongji.o xiugai.o xianshi.o
	gcc main.o load.o chaxun.o shanchu.o tongji.o xiugai.o xianshi.o -o test
main.o:main.c head.c
	gcc -c main.c
load.o:load.c head.c
	gcc -c load.c
chaxun.o:chaxun.c head.c
	gcc -c chaxun.c
shanchu.o:shanchu.c head.c
	gcc -c shanchu.c
tongji.o:tongji.c head.c
	gcc -c tongji.c
xiugai.o:xiugai.c head.c
	gcc -c xiugai.c
xianshi.o:xianshi.c head.c
	gcc -c xianshi.c
clean:
	rm test main.o load.o chaxun.o shanchu.o tongji.o xiugai.o xianshi.o
