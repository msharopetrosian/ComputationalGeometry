#ifndef CG_POLYGON_H
#define CG_POLYGON_H

#include <vector>
#include "Point.h"

namespace cg {

    class Polygon {
    public:
        std::vector<Point> vertices;

        Polygon();
        Polygon(const std::vector<Point>& v);

        double area() const;
        bool contains(const Point& p) const;
    };

}

#endif
