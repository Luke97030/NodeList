test : test.o doublelist.o
	gcc -o test test.o doublelist.o
test.o : doublelist.h test.c
	gcc -c test.c	
doublelist.o : doublelist.h doublelist.c
	gcc -c doublelist.c
clean:
	rm -rf *.o 	
