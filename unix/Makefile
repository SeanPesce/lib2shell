# Author: Sean Pesce

CC=gcc
CFLAGS=-Wall -Werror -fpic -I.
FNAME = lib2shell

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(FNAME).o
	$(CC) -shared -o $(FNAME).so $(FNAME).o

clean:
	rm -f $(FNAME).o $(FNAME).so
