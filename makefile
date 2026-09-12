a.out: src/main.o
	gcc src/*.o
main.o: src/main.c
	gcc -c src/main.c
