//
//	PhysicEngine.cpp
//	Projects
//
//	Created by <author> on 22/11/2016.
//
//

#include "PhysicEngine/PhysicEngine.hpp"

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
void PhysicEngine::removeObject(const Object& object) {
	//
}

std::string PhysicEngine::getObjectsAsJSON() {
	std::string r;
	r += "[";
	for (unsigned int i = 0; i < mObjects.size(); i++) {

		Vector3<float> position = mObjects[i]->getCenter();

		r += "{";
		r += "\"name\":\""+mObjects[i]->getName()+"\",";
		r += "\"position\":["+std::to_string(position.x)+","+std::to_string(position.y)+","+std::to_string(position.z)+"]}]";
		r += "}";
		if (i != mObjects.size()-1) r+= ",";

	}
	r+= "]";
	return r;
}

void PhysicEngine::simulate(float dt) {



	for (unsigned int i = 0; i < mObjects.size(); i++) {
		mObjects[i]->setCenter(mObjects[i]->getCenter() + (mObjects[i]->getVelocity() * (dt)));
	}
}
