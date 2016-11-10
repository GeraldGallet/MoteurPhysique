#ifndef FORCE_H
#define FORCE_H

#include <vector>
#include <iostream>

class Object;

using namespace std;

class Force{
private:
	vector<double> gravity(int index);
	vector<double> electrostatic(int index);
	vector<double> drag(int index);

	vector<Object*> listing;
public:
	vector<double> applyForces(int index);

	int getSize(){return listing.size();};
	void addObject(Object* object){listing.push_back(object);};
};



#endif
