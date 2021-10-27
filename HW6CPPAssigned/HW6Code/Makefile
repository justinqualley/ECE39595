# suffix rules don't allow pre-requisites to be used and are deprecated for
# this reason.  The right way to do this is to use patterns.  The "%" pattern
# allows any file to be matched.
OBJS = Faculty.o mainStaticCast.o Student.o Person.o
CC = g++
INCLUDE = 
LIBS = 
CFLAGS = -g -Werror -std=c++11
EXECUTABLE = hw6
COMMANDLINE =

# .PHONY : run
# run : $(EXECUTABLE)
# 	./$(EXECUTABLE) $(COMMANDLINE)

# cleanmake : clean CPP_Proj

all : $(EXECUTABLE)
$(EXECUTABLE) :  $(OBJS)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OBJS) $(INCLUDE) $(LIBS)

.cpp.o :
	$(CC) $(CFLAGS) -c $< $(INCLUDE) $(LIBS)

clean :
	rm $(EXECUTABLE) ${OBJS} 
