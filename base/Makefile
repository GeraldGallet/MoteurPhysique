DEBUG=no
CXX=g++

ifeq ($(DEBUG),yes)
	CXXFLAGS= -Wall -Wextra -std=c++11
	LDFLAGS=
	EXEC=ponytest
else
	CXXFLAGS= -Wall -Wextra -Werror -std=c++11 -O2
	LDFLAGS=
	EXEC=pony
endif



all: $(EXEC)

ifeq ($(DEBUG),yes)
	@echo "Generating in test mode"
else
	@echo "Generating in release mode"
endif


#debut de la zone propre au projet

$(EXEC): main.o Object.o Force.o
	$(CXX) $^ -o $@ $(LDFLAGS)

Object.o : Object.h

Force.o : Force.h

%.o: %.cpp
	$(CXX) -o $@ -c $< $(CXXFLAGS)

#fin


.PHONY: clean rmproper

clean:
	@rm -rf *.o

rmproper: clean
	@rm -rf $(EXEC)
