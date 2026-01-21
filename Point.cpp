#include "Point.h"

namespace cg {

    Point::Point() : x(0.0), y(0.0) {}

    Point::Point(double x_, double y_) : x(x_), y(y_) {}

    bool Point::operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }

    bool Point::operator!=(const Point& other) const {
        return !(*this == other);
    }

} // namespace cg
