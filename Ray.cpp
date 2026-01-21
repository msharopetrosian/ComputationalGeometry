#include "Ray.h"

namespace cg {

	Ray::Ray() : origin(), direction() {}
	Ray::Ray(const Point& o, const Vector& d) : origin(o), direction(d) {}

}
