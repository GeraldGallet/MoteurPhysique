//
//	Object.cpp
//	Projects
//
//	Created by <author> on 22/11/2016.
//
//

#include "PhysicEngine/Object.hpp"

Object::Object():mName("myObject"), mCenter()	{}
Object::~Object() {}

Object::Object(std::string name): mName(name)
{}


void Object::setName(std::string name) {
	mName = name;
	return;
}

std::string Object::getName() const {
	return mName;
}

void Object::setWeight(float weight) {
	mWeight = weight;
	return;
}

float Object::getWeight() const {
	return mWeight;
}

void Object::setCenter(Vector3<float> center) {
	mCenter = center;
	return;
}

void Object::setCenter(float x, float y, float z) {
	mCenter.x = x;
	mCenter.y = y;
	mCenter.z = z;
	return;
}

Vector3<float> Object::getCenter() const {
	return mCenter;
}


void Object::setVelocity(Vector3<float> velocity) {
	mVelocity = velocity;
	return;
}

void Object::setVelocity(float x, float y, float z) {
	mVelocity.x = x;
	mVelocity.y = y;
	mVelocity.z = z;
	return;
}

Vector3<float> Object::getVelocity() const {
	return mVelocity;
}
