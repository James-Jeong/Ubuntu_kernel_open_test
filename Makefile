all: test1

test1: test1.o
	gcc -o test1 test1.o

test1.o: test1.c
	gcc -c -o test1.o test1.c

clean:
	rm -f test1.o
	rm -f test1

.PHONY: clean

