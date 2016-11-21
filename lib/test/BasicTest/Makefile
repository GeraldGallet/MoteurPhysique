CXX = g++
CXXFLAGS = -std=c++11 -W -Wall -v -I ../../../
LDFLAGS = -lpthread -L../../../bin/lib -lphysicengine
EXEC = basictest
SRC= main.cpp
OBJ= $(SRC:.cpp=.o)

all : $(EXEC)

basictest: $(OBJ)
	$(CXX) -o $@ $^ $(LDFLAGS)

%.o : %.cpp
	$(CXX) -c $< -o $@ $(CXXFLAGS)

clean:
	rm -f $(EXEC) *.o

run:
	./$(EXEC)
