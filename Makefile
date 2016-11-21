BIN_LIB_PATH = ./bin/lib
SRC_PATH = ./lib/src
TEST_PATH = ./lib/test
CXX = g++
CXXFLAGS = -std=c++11 -W -Wall -v
SRC= $(SRC_PATH)/Force.cpp $(SRC_PATH)/Object.cpp $(SRC_PATH)/PhysicEngine.cpp
TEST= $(TEST_PATH)/BasicTest/
OBJ= $(SRC:.cpp=.o)

all: libphysicengine.a

libphysicengine.a: $(OBJ)
	mkdir -p ./bin/lib
	ar -q $(BIN_LIB_PATH)/$@ $^

%.o : %.cpp
	$(CXX) -c $< -o $@ $(CXXFLAGS) -I ./

test: libphysicengine.a
	make -C $(TEST) all

clean:
	rm -fR bin lib/src/*.o
