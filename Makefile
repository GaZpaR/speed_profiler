CC              := g++
PROJPATH	:= -I./ 
OPTS            := -lutil -Wextra -std=c++14 
 
all: class 

class: stack.o main.o calc.o
	$(CC) $(PROJPATH) $(OPTS) -o stcl stack.o main.o calc.o

stack.o: stack.cpp
	$(CC) $(OPTS) $(PROJPATH) -c stack.cpp
main.o: main.cpp
	$(CC) $(OPTS) $(PROJPATH) -c main.cpp 
calc.o: calc.cpp
	$(CC) $(OPTS) $(PROJPATH) -c calc.cpp 

clear:
	rm -f *.o class
	rm -f stcl

