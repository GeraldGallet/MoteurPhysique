#include <iostream>
#include <vector>
#include <memory>
#include <thread>

#include "PhysicEngine/PhysicEngine.hpp"
#include "PhysicEngine/Object.hpp"
#include "PhysicEngine/Sphere.hpp"
#include "PhysicEngine/Vector3.hpp"

int main(){
	PhysicEngine myEngine;
	Object myObject;
	Sphere mySphere;
	myEngine.addObject(new Sphere());
	myEngine.getObject(0)->setVelocity(1,1,1);
	std::thread engineRun(&PhysicEngine::run,&myEngine);
	while (true) {
		std::cout << myEngine.getObjectsAsJSON() << '\n';
	}
	return 0;
}
