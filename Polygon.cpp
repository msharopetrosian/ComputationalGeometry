#include "Polygon.h"

namespace cg {

    Polygon::Polygon() {}
    Polygon::Polygon(const std::vector<Point>& v) : vertices(v) {}

    double Polygon::area() const {
        double a = 0.0;
        int n = vertices.size();
        for (int i = 0; i < n; ++i) {
            const Point& p1 = vertices[i];
            const Point& p2 = vertices[(i + 1) % n];
            a += p1.x * p2.y - p2.x * p1.y;
        }
        return 0.5 * a;
    }

    bool Polygon::contains(const Point& p) const {
        bool inside = false;
        int n = vertices.size();
        for (int i = 0, j = n - 1; i < n; j = i++) {
            const Point& pi = vertices[i];
            const Point& pj = vertices[j];
            if (((pi.y > p.y) != (pj.y > p.y)) &&
                (p.x < (pj.x - pi.x) * (p.y - pi.y) / (pj.y - pi.y) + pi.x))
                inside = !inside;
        }
        return inside;
    }

}
