#ifndef CG_DELAUNAY_H
#define CG_DELAUNAY_H

#include <vector>
#include "Point.h"

namespace cg {

    struct Triangle {
        Point a, b, c;
    };

    std::vector<Triangle> delaunayTriangulation(const std::vector<Point>& points);

}

#endif
