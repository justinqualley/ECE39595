# suffix rules don't allow pre-requisites to be used and are deprecated for
# this reason.  The right way to do this is to use patterns.  The "%" pattern
# allows any file to be matched.
OBJS = Array2D.o main.o
CC = g++
INCLUDE = 
LIBS = 
CFLAGS = -Wall -std=c++11 -g
VAL = valgrind --tool=memcheck --log-file=vallog --leak-check=full --verbose
EXECUTABLE = hw4
COMMANDLINE =

.PHONY : run
run : $(EXECUTABLE)
	./$(EXECUTABLE) $(COMMANDLINE)

.PHONY : $(EXECUTABLE)
$(EXECUTABLE) :  $(OBJS)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OBJS) $(INCLUDE) $(LIBS)

.cpp.o :
	$(CC) $(CFLAGS) -c $< $(INCLUDE) $(LIBS)

memory: hw4
	$(VAL) ./hw4
clean :
	rm $(EXECUTABLE) ${OBJS} 

test1: hw4
	./hw4 > out.txt
	diff output.txt out.txt
