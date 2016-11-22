//
//  Object.hpp
//  Projects
//
//  Created by <author> on 22/11/2016.
//
//

#ifndef Object_hpp
#define Object_hpp

#include <iostream>
#include <string>

#include "PhysicEngine/Vector3.hpp"

class Object {
private:
  std::string mName;
  float mWeight;
  Vector3<float> mCenter;
  Vector3<float> mVelocity;
public:
  Object();
  Object(std::string name);
  ~Object();

  void setName(std::string name);
  std::string getName() const;

  void setWeight(float weight);
  float getWeight() const;

  void setCenter(Vector3<float> center);
  void setCenter(float x, float y, float z);
  Vector3<float> getCenter() const;

  void setVelocity(Vector3<float> velocity);
  void setVelocity(float x, float y, float z);
  Vector3<float> getVelocity() const;

protected:

};

inline std::ostream& operator<<(std::ostream& os, const Object& object)
{
    os << "Name : " << object.getName() << " Type : Object";
    return os;
}

#endif /* Object_hpp */
