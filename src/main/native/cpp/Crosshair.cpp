#include "Crosshair.h"
using namespace retrylife::frc;

Crosshair::Crosshair(double x, double y) {
    this->x = x;
    this->y = y;
}

double Crosshair::getX() { return this->x; }
double Crosshair::getY() { return this->y; }