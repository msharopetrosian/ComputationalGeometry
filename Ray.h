#ifndef CG_RAY_H
#define CG_RAY_H

#include "Point.h"
#include "Vector.h"

namespace cg {

    class Ray {
    public:
        Point origin;
        Vector direction;

        Ray();
        Ray(const Point& o, const Vector& d);
    };

}

#endif
