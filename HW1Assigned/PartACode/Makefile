# ***
# *** DO NOT modify this file 
# ***

WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = g++ -g $(WARNING) $(ERROR) 

TESTFALGS = 

SRCS = main.cpp Address.cpp
OBJS = $(SRCS:%.cpp=%.o)

main: $(OBJS)
	$(GCC) $(TESTFALGS) $(OBJS) -o main

.c.o:
	$(GCC) $(TESTFALGS) -c $*.cpp
