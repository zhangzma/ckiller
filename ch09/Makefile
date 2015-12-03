# 
CC         = g++
CXXFLAGS   = -Wall -g
INCLDEPATH = .
BIN        = ex01 \
             ex14 ex15 ex18 \
             ex22 ex24 ex27 ex28 ex29 \
             ex34 ex35 ex38 ex39 \
             ex40 ex41 \
             ex-t


.PHONY:all clean
all:$(BIN)

%.o:%.c
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o *.exe

