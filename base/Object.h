#ifndef OBJECT_H
#define OBJECT_H

#include <vector>
#include <iostream>

using namespace std;

class Object{
private:
	vector<double> position;
	vector<double> speed;
	double mass;
	double charge;

public:
	vector<double> getPosition(){return position;};
	vector<double> getSpeed(){return speed;};
	double getMass(){return mass;};
	double getCharge(){return charge;};
	void setPosition(vector<double>);
	void setSpeed(vector<double>);
	void setMass(double);
	void setCharge(double);
};
#endif
