.PHONY: all clean

PROGS=sum calculatrice
CC=gcc
CFLAGS=

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $< 

%.s: %.c
	$(CC) -S $< 

clean:
	rm -f $(PROGS) *.s
