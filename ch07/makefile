CC=g++
CXXFLAGS= -Wall -g
INCLDEPATH=.
BIN=ex7-3 ex7-4 ex7-5 ex7-6 ex7-15 eg7.2.2 find_char find_val is_shorter ptrswap ex7-13  ex7-14

.PHONY:all clean
all:$(BIN)
%.o:%.c
	$(CC) $(CXXFLAGS) -c $< -o $@


clean:
	rm -f *.o $(BIN)
