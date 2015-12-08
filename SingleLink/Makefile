test : test.o list.o
	gcc -o test test.o list.o
test.o : test.c list.h
	gcc -c test.c
list.o : list.h list.c
	gcc -c list.c
clean:
	rm -rf list.o test.o
