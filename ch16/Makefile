# Chapter 16's makefile
CC         = g++
CXXFLAGS   = -Wall -g
INCLDEPATH = .
BIN        = ex3


.PHONY:all clean
all:$(BIN)

%.o:%.c
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o $(BIN)

