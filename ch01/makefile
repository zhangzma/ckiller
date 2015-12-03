# 
CC         = g++
CXXFLAGS   = -Wall -g
INCLDEPATH = .
BIN        = ex1-2 ex1-3 ex1-4 ex1-5 ex1-8 ex1-9 ex1-10 ex1-10_2 ex1-11 \
ex1-11_2


.PHONY:all clean
all:$(BIN)

%.o:%.c
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o $(BIN)

