# suffix rules don't allow pre-requisites to be used and are deprecated for
# this reason.  The right way to do this is to use patterns.  The "%" pattern
# allows any file to be matched.
OBJS = Int.o Float.o main.o
CC = g++
INCLUDE = 
LIBS = 
CFLAGS = -g -Werror -std=c++11
EXECUTABLE = 
COMMANDLINE =

# .PHONY : run
# run : $(EXECUTABLE)
# 	./$(EXECUTABLE) $(COMMANDLINE)

#cleanmake : clean hw7

all : $(EXECUTABLE)
$(EXECUTABLE) :  $(OBJS)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OBJS) $(INCLUDE) $(LIBS)
	rm ${OBJS}
	./a.out
.cpp.o :
	$(CC) $(CFLAGS) -c $< $(INCLUDE) $(LIBS)

clean :
	rm ${EXECUTABLE}
