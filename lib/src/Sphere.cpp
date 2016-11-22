//
//  Sphere.cpp
//  Projects
//
//  Created by <author> on 22/11/2016.
//
//

#include "PhysicEngine/Sphere.hpp"

Sphere::Sphere():Object("mySphere"), mRadius(1)  {}
Sphere::~Sphere() {}

Sphere::Sphere(std::string name): Object(name), mRadius(1) {}
Sphere::Sphere(float radius): Object("mySphere"), mRadius(radius) {}
Sphere::Sphere(std::string name, float radius): Object(name), mRadius(radius) {}


float Sphere::getRadius() {
  return mRadius;
}

void Sphere::setRadius(float radius) {
  mRadius = radius;
  return;
}
