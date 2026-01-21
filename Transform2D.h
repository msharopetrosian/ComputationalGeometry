#ifndef CG_TRANSFORM2D_H
#define CG_TRANSFORM2D_H

#include "Point.h"

namespace cg {

    class Transform2D {
        double m[3][3];
    public:
        Transform2D();

        static Transform2D translation(double tx, double ty);
        static Transform2D rotation(double angle);
        static Transform2D scaling(double sx, double sy);

        Point apply(const Point& p) const;
        Transform2D operator*(const Transform2D& other) const;
    };

}

#endif
