WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = g++ -g $(WARNING) $(ERROR) 

TESTFALGS = 

SRCS = hw1.cpp Automobile.cpp
OBJS = $(SRCS:%.cpp=%.o)

run: main
	./main
main: $(OBJS)
	$(GCC) $(TESTFALGS) $(OBJS) -o main

.c.o:
	$(GCC) $(TESTFALGS) -c $*.cpp



