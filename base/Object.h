#ifndef OBJECT_H
#define OBJECT_H

#include <vector>
#include <iostream>

using namespace std;

class Force;

class Object{
private:
	vector<double> position;
	vector<double> speed;
	double mass;
	double charge;

	int index;

public:
	Object(){};
	Object(Force* force);

	vector<double> getPosition(){return position;};
	vector<double> getSpeed(){return speed;};
	double getMass(){return mass;};
	double getCharge(){return charge;};

	void setPosition(vector<double> newPosition){position = newPosition;};
	void setSpeed(vector<double> newSpeed){speed = newSpeed;};
	void setMass(double newMass){mass = newMass;};
	void setCharge(double newCharge){charge = newCharge;};
};
#endif
