#include <iostream>
#include "CG.h"

using namespace cg;

int main() {
    Point p1(0, 0);
    Point p2(3, 4);

    Vector v(p1, p2);
    std::cout << "Vector length: " << v.length() << "\n";

    Segment s(p1, p2);
    std::cout << "Segment length: " << s.length() << "\n";

    Polygon poly({
        Point(0,0),
        Point(5,0),
        Point(5,5),
        Point(0,5)
        });

    Point test(2, 2);
    std::cout << "Point inside polygon: "
        << poly.contains(test) << "\n";

    return 0;
}
