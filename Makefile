all: mycfile

mycfile: mycfile.o
	gcc -o mycfile mycfile.o

mycfile.o: mycfile.c
	gcc -c mycfile.c

pdf: mycfile.c
