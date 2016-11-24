//
//	Sphere.hpp
//	Projects
//
//	Created by <author> on 22/11/2016.
//
//

#ifndef Sphere_hpp
#define Sphere_hpp

#include <iostream>
#include "PhysicEngine/Object.hpp"

class Sphere : public Object{
private:
	float mRadius;
public:
	Sphere();
	Sphere(std::string name);
	Sphere(float radius);
	Sphere(std::string name, float radius);
	~Sphere();

	float getRadius();
	void setRadius(float radius);
protected:

};

inline std::ostream& operator<<(std::ostream& os, const Sphere& sphere)
{
	os << "Name : " << sphere.getName() << " Type : Object/Sphere";
	return os;
}

#endif /* Sphere_hpp */
