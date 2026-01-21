#include "Transform2D.h"
#include <cmath>

namespace cg {

    Transform2D::Transform2D() {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                m[i][j] = (i == j);
    }

    Transform2D Transform2D::translation(double tx, double ty) {
        Transform2D t;
        t.m[0][2] = tx;
        t.m[1][2] = ty;
        return t;
    }

    Transform2D Transform2D::rotation(double a) {
        Transform2D t;
        t.m[0][0] = cos(a); t.m[0][1] = -sin(a);
        t.m[1][0] = sin(a); t.m[1][1] = cos(a);
        return t;
    }

    Transform2D Transform2D::scaling(double sx, double sy) {
        Transform2D t;
        t.m[0][0] = sx;
        t.m[1][1] = sy;
        return t;
    }

    Point Transform2D::apply(const Point& p) const {
        return Point(
            m[0][0] * p.x + m[0][1] * p.y + m[0][2],
            m[1][0] * p.x + m[1][1] * p.y + m[1][2]
        );
    }

    Transform2D Transform2D::operator*(const Transform2D& o) const {
        Transform2D r;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++) {
                r.m[i][j] = 0;
                for (int k = 0; k < 3; k++)
                    r.m[i][j] += m[i][k] * o.m[k][j];
            }
        return r;
    }

}
