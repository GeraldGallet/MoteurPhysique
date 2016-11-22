#include <iostream>
#include <vector>
#include <memory>
#include "PhysicEngine/PhysicEngine.hpp"
#include "PhysicEngine/Object.hpp"
#include "PhysicEngine/Sphere.hpp"
#include "PhysicEngine/Vector3.hpp"

int main(){
	PhysicEngine myEngine;
	Object myObject;
	Sphere mySphere;
	myEngine.addObject(new Sphere());
	myEngine.addObject(new Sphere("TEST1"));
	myEngine.addObject(new Sphere("TEST2"));
	std::cout << myEngine.getObjectsAsJSON() << '\n';
	std::cout << mySphere.getCenter().x << " " << mySphere.getCenter().y  << '\n';
	myEngine.run();
	return 0;
}
