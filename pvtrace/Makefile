#
# Makefile for the trace utility.
#

CC = g++

OBJS = trace.o symbols.o stack.o

pvtrace: $(OBJS)
	g++ -o $@ $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -Wall -c $<

install: pvtrace
	cp pvtrace /usr/local/bin

clean:
	rm -f pvtrace *.o
