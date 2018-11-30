run:prog
	./prog
prog:prog.c
	gcc -std=c99 -lcrypt prog.c -o prog
build:prog
