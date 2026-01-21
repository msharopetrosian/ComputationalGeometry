#ifndef CG_LINE_H
#define CG_LINE_H

#include "Point.h"
#include "Vector.h"

namespace cg {

    class Line {
    public:
        Point p;
        Vector dir;

        Line();
        Line(const Point& p, const Vector& d);
    };

}

#endif
