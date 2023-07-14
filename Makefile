all: mysleep

mysleep: myslpmain.c mysleep.c mysleep.h
	cc -Wall -std=c99 -o myslpmain myslpmain.c mysleep.c

clean:
	rm -f myslpmain

