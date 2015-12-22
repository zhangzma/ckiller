# Chapter 16's makefile
CC         = g++
CXXFLAGS   = -Wall -g
INCLUDEPATH = .
BIN        = ex3 \
             ex52 ex53

.PHONY:all clean
all:$(BIN)

%.o:%.c
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o $(BIN)

