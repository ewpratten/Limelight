#include "Contour.h"
using namespace retrylife::frc;

Contour::Contour(double x, double y, double area, double skew) {
    this->x = x;
    this->y = y;
    this->area = area;
    this->skew = skew;
}

double Contour::getX() { return this->x; }
double Contour::getY() { return this->y; }
double Contour::getArea() { return this->area; }
double Contour::getSkew() { return this->skew; }
double Contour::getAspect() { return (this->x / this->y); }