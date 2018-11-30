run:prog
	./prog
prog:prog.c
	gcc -std=c99 -lcrypt -lstring prog.c -o prog
build:prog
