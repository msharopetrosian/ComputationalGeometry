#include "Vector.h"
#include <cmath>

namespace cg {

    Vector::Vector() : x(0.0), y(0.0) {}

    Vector::Vector(double x_, double y_) : x(x_), y(y_) {}

    Vector::Vector(const Point& from, const Point& to)
        : x(to.x - from.x), y(to.y - from.y) {
    }

    double Vector::length() const {
        return std::sqrt(x * x + y * y);
    }

    Vector Vector::normalized() const {
        double len = length();
        if (len == 0.0)
            return Vector(0.0, 0.0);
        return Vector(x / len, y / len);
    }

    double Vector::dot(const Vector& other) const {
        return x * other.x + y * other.y;
    }

    double Vector::cross(const Vector& other) const {
        return x * other.y - y * other.x;
    }

    Vector Vector::operator+(const Vector& other) const {
        return Vector(x + other.x, y + other.y);
    }

    Vector Vector::operator-(const Vector& other) const {
        return Vector(x - other.x, y - other.y);
    }

    Vector Vector::operator*(double scalar) const {
        return Vector(x * scalar, y * scalar);
    }

} // namespace cg
