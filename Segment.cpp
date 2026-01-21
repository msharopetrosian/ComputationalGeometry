#include "Segment.h"
#include <cmath>

namespace cg {

    Segment::Segment() : a(), b() {}
    Segment::Segment(const Point& a_, const Point& b_) : a(a_), b(b_) {}

    double Segment::length() const {
        double dx = a.x - b.x;
        double dy = a.y - b.y;
        return std::sqrt(dx * dx + dy * dy);
    }

}
