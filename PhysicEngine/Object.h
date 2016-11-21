#ifndef OBJECT_H
#define OBJECT_H

#include <vector>
#include <iostream>
#include "PhysicEngine/Force.h"

using namespace std;

class Object{
private:

public:
	Object(){std::cout << "I'am an object" << '\n';};
	void test();
};
#endif
