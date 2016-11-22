//
//  PhysicEngine.hpp
//  Projects
//
//  Created by <author> on 22/11/2016.
//
//

#ifndef PhysicEngine_hpp
#define PhysicEngine_hpp

#include <iostream>
#include <string>
#include <vector>
#include <ctime>

#include "PhysicEngine/Object.hpp"

class PhysicEngine {
private:
  void simulate(float dt);

  std::vector<Object*> mObjects;

public:
  PhysicEngine();
  ~PhysicEngine();

  void run();
  void addObject(Object* object);
  void removeObject(const Object& object);
  std::string getObjectsAsJSON();
protected:

};


#endif /* PhysicEngine_hpp */
