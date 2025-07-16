#include "circle.h"

//  your code here (functions)
#include <cmath>

double circleArea(Circle c) { return M_PI * c.radius * c.radius; }

double circleLength(Circle c) { return 2 * M_PI * c.radius; }

bool isPointInside(Circle c, Point p) {
    double dx = p.x - c.center.x;
    double dy = p.y - c.center.y;
    double d = dx * dx + dy * dy;
    double r = c.radius * c.radius;

    return d <= r;
}
