//
//	PhysicEngine.cpp
//	Projects
//
//	Created by <author> on 22/11/2016.
//
//

#include "../../PhysicEngine/PhysicEngine.hpp"

	PhysicEngine::PhysicEngine(): mObjects()	{}
PhysicEngine::~PhysicEngine() {}

void PhysicEngine::run() {
	clock_t dt, start = 0, end = 0;
	while (true) {
		dt = end-start;
		start = clock();
		simulate((float)dt/CLOCKS_PER_SEC);
		end = clock();
	}
}

Object* PhysicEngine::getObject(unsigned int index) {
	if(index >= mObjects.size()) return NULL;
	return mObjects[index];
}

void PhysicEngine::addObject(Object* object) {
	mObjects.push_back(object);
	return;
}


std::string PhysicEngine::getObjectsAsJSON() {
	std::string r;
	r += "[";
	for (unsigned int i = 0; i < mObjects.size(); i++) {

		Vector3<float> position = mObjects[i]->getCenter();

    r += "{";
    r += "\"name\":\""+mObjects[i]->getName()+"\",";
    r += "\"position\":["+std::to_string(position.x)+","+std::to_string(position.y)+","+std::to_string(position.z)+"]";
    r += "}";
    if (i != mObjects.size()-1) r+= ",";
	}
	r+= "]";
	return r;
}


void PhysicEngine::simulate(float dt) {

	Vector3<float> k1, k2, k3, k4, centerBase;

	for (unsigned int i = 0; i < mObjects.size(); i++) {
		centerBase = mObjects[i]->getCenter();

		k1 = mObjects[i]->getVelocity() * dt;

		mObjects[i]->setCenter(centerBase + k1/ (float) 2);
		k2 = ( mObjects[i]->getVelocity() + ( ( (GetForces(*mObjects[i]) * (dt/2) ) ) / mObjects[i]->getWeight() ) ) * dt;

		mObjects[i]->setCenter(centerBase + k2/ (float) 2);
		k3 = ( mObjects[i]->getVelocity() + ( ( (GetForces(*mObjects[i]) * (dt/2) ) ) / mObjects[i]->getWeight() ) ) * dt;

		mObjects[i]->setCenter(centerBase + k3);
		k4 = ( mObjects[i]->getVelocity() + ( ( (GetForces(*mObjects[i]) *   dt   ) ) / mObjects[i]->getWeight() ) ) * dt;

		mObjects[i]->setCenter(centerBase);
		mObjects[i]->setCenter(mObjects[i]->getCenter() + k1/ (float) 6 + k2/ (float) 3 + k3/ (float) 3 + k4/ (float) 6);
	}
}

void PhysicEngine::removeObject(const Object& object) {
	for (unsigned int i = 0; i < mObjects.size(); i++) {
		if(
			mObjects[i]->getName() == object.getName() &&
			mObjects[i]->getWeight() == object.getWeight() &&
			mObjects[i]->getCenter() == object.getCenter() &&
			mObjects[i]->getVelocity() == object.getVelocity()
		){
			mObjects.erase(mObjects.begin() + i);
			return;
		}
	}
}

/* TODO */



Vector3<float> PhysicEngine::GetForces(Object &object){
	Vector3<float> forces = gravity(object);
	return forces;
}
