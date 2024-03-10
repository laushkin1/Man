CC=gcc
CFLAGS=-std=c11 -Wall -Werror -Wno-array-parameter
LDLIBS=-lcurses
OUTPUT=man_run

all: man_run.c
	$(CC) $(CFLAGS) man_run.c $(LDLIBS) -o $(OUTPUT)

clean:
	rm -rf $(OUTPUT)
