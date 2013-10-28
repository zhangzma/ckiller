# 
CC         = g++
CXXFLAGS   = -Wall -g
INCLDEPATH = .
BIN        = ex1-2 ex1-3 ex1-4 ex1-5

.PHONY:all clean
all:$(BIN)

%.o:%.c
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o $(BIN)
