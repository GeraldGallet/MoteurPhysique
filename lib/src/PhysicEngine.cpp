#include <thread>
#include <unistd.h>

#include "PhysicEngine/PhysicEngine.h"

using namespace std;

void PhysicEngine::run() {
  while (true) {
    std::cout << "I do some stuff with PhysicEngine" << '\n';
    usleep(5);
  }
}
