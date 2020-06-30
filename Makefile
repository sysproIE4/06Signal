all: mysleep signalTest

mysleep: mysleep.c
	cc -Wall -std=c99 -o mysleep mysleep.c

signalTest: signalTest.c
	cc -Wall -std=c99 -o signalTest signalTest.c

