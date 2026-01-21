#include "Line.h"

namespace cg {

	Line::Line() : p(), dir() {}
	Line::Line(const Point& p_, const Vector& d_) : p(p_), dir(d_) {}

}
