# 
CC         = g++
CXXFLAGS   = -Wall -g
INCLDEPATH = .
BIN        = ex24 ex25 ex26

.PHONY:all clean
all:$(BIN)

%.o:%.c
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o *.exe

