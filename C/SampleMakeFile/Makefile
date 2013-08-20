CC=gcc
CFLAGS= -I./ -Wall

all:prog

%.o:%.c
	gcc $(CFLAGS) -c $? -o $@



prog: main.o lib.o
	gcc -o prog main.o lib.o

fork: fork.o lib.o syscalls.o
	gcc -o fork fork.o lib.o syscalls.o


%.o:%.S
	as $? -o $@

clean: 
	rm -f *.o prog fork *~