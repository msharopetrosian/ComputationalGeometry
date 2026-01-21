#ifndef CG_POINT_H
#define CG_POINT_H

namespace cg {

    class Point {
    public:
        double x;
        double y;

        Point();
        Point(double x, double y);

        bool operator==(const Point& other) const;
        bool operator!=(const Point& other) const;
    };

} // namespace cg

#endif
