.PHONY: all clean

PROGS=tconvert countchar1 countchar2 revert revert2 intlist countint
CC=gcc
CFLAGS=

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $< 

%.s: %.c
	$(CC) -S $< 

clean:
	rm -f $(PROGS) *.s