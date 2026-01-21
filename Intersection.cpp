#include "Intersection.h"
#include "Orientation.h"

namespace cg {

    bool intersect(const Segment& s1, const Segment& s2) {
        int o1 = orientation(s1.a, s1.b, s2.a);
        int o2 = orientation(s1.a, s1.b, s2.b);
        int o3 = orientation(s2.a, s2.b, s1.a);
        int o4 = orientation(s2.a, s2.b, s1.b);

        return o1 != o2 && o3 != o4;
    }

}
