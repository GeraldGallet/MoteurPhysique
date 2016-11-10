#ifndef FORCE_H
#define FORCE_H

#include <vector>
#include <iostream>

using namespace std;

class Force{
private:
	vector<double> gravity(Object* object);
	vector<double> electrostatic(Object* object);
	vector<double> drag(Object* object);

public:
	vector<double> applyForces(Object* object);

};



#endif
