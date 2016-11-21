#include <thread>

#include "PhysicEngine/Object.h"
#include "PhysicEngine/Force.h"
#include "PhysicEngine/PhysicEngine.h"


int main(){
	Object plouf;
	Force plaf;
	PhysicEngine myEngine;
	std::thread engineRun(&PhysicEngine::run,&myEngine);
	while (true) {
		std::cout << "I can do some other stuff" << '\n';
	}
	return 0;
}
