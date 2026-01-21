#include "Orientation.h"

namespace cg {

    int orientation(const Point& a, const Point& b, const Point& c) {
        double val = (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
        if (val > 0) return 1;
        if (val < 0) return -1;
        return 0;
    }

}
