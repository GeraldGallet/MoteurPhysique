#ifndef FORCE_H
#define FORCE_H

#include <vector>
#include <iostream>

using namespace std;

class Force{
private:
	vector<double> gravity();
	vector<double> electrostatic();
	vector<double> drag();

public:
	vector<double> applyForces();

};



#endif
