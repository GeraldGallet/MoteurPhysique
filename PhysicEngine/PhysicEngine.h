#ifndef PHYSICENGINE_H
#define PHYSICENGINE_H

#include <iostream>

#include "PhysicEngine/Object.h"
#include "PhysicEngine/Force.h"

using namespace std;

class PhysicEngine{
private:

public:
	PhysicEngine(){std::cout << "I'am the PhysicEngine" << '\n';};
  void run();
};
#endif
