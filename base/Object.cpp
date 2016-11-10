#include "object.h"

using namespace std;

Object::Object(Force* force) {
  for(int i = 0; i <= 2; i++) {
    position.push_back(0);
    speed.push_back(0);
  }
  mass = 0;
  charge = 0;
  index = force->getSize();
  force->addObject(this);
}
