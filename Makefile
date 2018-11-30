run:prog
	./prog
prog:prog.c
	gcc -std=c99 -lcrypt -ls prog.c -o prog
build:prog
