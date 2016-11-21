#include <thread>

#include "PhysicEngine/Object.h"
#include "PhysicEngine/Force.h"
#include "PhysicEngine/PhysicEngine.h"


int main(){
	Object plouf;
	Force plaf;
	PhysicEngine myEngine;
	//myEngine.run();
	std::thread engineRun(&PhysicEngine::run,&myEngine);
	//engineRun.join();
	while (true) {
		std::cout << "I can do some other stuff" << '\n';
	}
	return 0;
}
