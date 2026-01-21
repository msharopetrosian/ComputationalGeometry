#ifndef CG_SEGMENT_H
#define CG_SEGMENT_H

#include "Point.h"

namespace cg {

    class Segment {
    public:
        Point a, b;

        Segment();
        Segment(const Point& a, const Point& b);

        double length() const;
    };

}

#endif
