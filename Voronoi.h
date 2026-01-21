#ifndef CG_VORONOI_H
#define CG_VORONOI_H

#include <vector>
#include "Point.h"

namespace cg {

    struct VoronoiEdge {
        Point a, b;
    };

    std::vector<VoronoiEdge> voronoiDiagram(const std::vector<Point>& points);

}

#endif
