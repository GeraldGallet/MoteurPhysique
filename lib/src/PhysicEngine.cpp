//
//  PhysicEngine.cpp
//  Projects
//
//  Created by <author> on 22/11/2016.
//
//

#include "PhysicEngine/PhysicEngine.hpp"

PhysicEngine::PhysicEngine(): mObjects()  {}
PhysicEngine::~PhysicEngine() {}

void PhysicEngine::run() {
  clock_t dt, start, end;
  while (true) {
    dt = end-start;
    start = clock();
    simulate((float)dt/CLOCKS_PER_SEC);
    end = clock();
  }
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
  r += "{";
  for (unsigned int i = 0; i < mObjects.size(); i++) {
    r += mObjects[i]->getName();
    if (i != mObjects.size()-1) r+= ",";
  }
  r+= "}";
  return r;
}

void PhysicEngine::simulate(float dt) {
  std::cout << "Loop duration : " << dt << '\n';
  for (unsigned int i = 0; i < mObjects.size(); i++) {
    mObjects[i]->setCenter(mObjects[i]->getCenter() + mObjects[i]->getVelocity() * dt);
  }
}
