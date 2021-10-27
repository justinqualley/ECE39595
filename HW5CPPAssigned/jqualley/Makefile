# suffix rules don't allow pre-requisites to be used and are deprecated for
# this reason.  The right way to do this is to use patterns.  The "%" pattern
# allows any file to be matched.
OBJS = *.cpp
CC = g++
INCLUDE = 
LIBS = 
CFLAGS = -Wall -std=c++11 -g
VAL = valgrind --tool=memcheck --log-file=vallog --leak-check=full --verbose
EXECUTABLE = hw5
COMMANDLINE =

.PHONY : run
run : $(EXECUTABLE)
	./$(EXECUTABLE) $(COMMANDLINE)

.PHONY : $(EXECUTABLE)
$(EXECUTABLE) :  $(OBJS)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OBJS) $(INCLUDE) $(LIBS)

.cpp.o :
	$(CC) $(CFLAGS) -c $< $(INCLUDE) $(LIBS)

memory: hw5
	$(VAL) ./hw5
clean :
	rm $(EXECUTABLE) 

test1: hw5
	./hw5
