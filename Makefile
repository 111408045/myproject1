project: main.o mp1.o
	cc main.o mp1.o -o project
main.o: main.c mp1.h
	cc -Wall -c main.c
mp1.o: mp1.c mp1.h
	cc -Wall -c mp1.c

