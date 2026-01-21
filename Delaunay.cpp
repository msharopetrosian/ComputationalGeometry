#include "Delaunay.h"

namespace cg {

    // Minimal placeholder triangulation (valid API-level)
    std::vector<Triangle> delaunayTriangulation(const std::vector<Point>& pts) {
        std::vector<Triangle> tris;
        if (pts.size() < 3) return tris;

        for (size_t i = 1; i + 1 < pts.size(); ++i)
            tris.push_back({ pts[0], pts[i], pts[i + 1] });

        return tris;
    }

}

