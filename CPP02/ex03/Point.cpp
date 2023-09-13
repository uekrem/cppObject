#include "Point.hpp"

Point::Point():x(0),y(0)
{       
}

Point::Point(const float x,const float y):x(x),y(y)
{
}

Point::Point(const Point &r):x(r.x),y(r.y)
{
}

Point &Point::operator=(const Point &copyPoint)
{
    (void) copyPoint;
    return (*this);
}

Point::~Point()
{
}

Fixed const Point::getX(void) const {
    return this->x;
}

Fixed const Point::getY(void) const {
    return this->y;
}