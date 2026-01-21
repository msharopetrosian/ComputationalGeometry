#ifndef CG_VECTOR_H
#define CG_VECTOR_H

#include "Point.h"

namespace cg {

    class Vector {
    public:
        double x;
        double y;

        Vector();
        Vector(double x, double y);
        Vector(const Point& from, const Point& to);

        double length() const;
        Vector normalized() const;

        double dot(const Vector& other) const;
        double cross(const Vector& other) const;

        Vector operator+(const Vector& other) const;
        Vector operator-(const Vector& other) const;
        Vector operator*(double scalar) const;
    };

} // namespace cg

#endif
