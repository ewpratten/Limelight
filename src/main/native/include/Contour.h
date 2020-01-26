#pragma once

namespace retrylife::frc {
class Contour {
   private:
    double x, y, area, skew;

   public:
    /**
     * Create an empty Contour
     */
    Contour() : Contour(0, 0, 0, 0){};

    /**
     * Create a Contour
     *
     * @param x    Raw X screenspace
     * @param y    Raw Y screenspace
     * @param area Screen area [0 to 100%]
     * @param skew Target skew [-90 to 0 degs]
     */
    Contour(double x, double y, double area, double skew);

    /**
     * Get the raw X screenspace
     *
     * @return X screenspace
     */
    double getX();

    /**
     * Get the raw Y screenspace
     *
     * @return Y screenspace
     */
    double getY();

    /**
     * Get contour screen cover as a percentage
     *
     * @return Contour area
     */
    double getArea();

    /**
     * Get target skew from -90 to 0 degrees
     *
     * @return Target skew
     */
    double getSkew();

    /**
     * Get the contour aspect ratio
     *
     * @return Aspect ratio
     */
    double getAspect();
};
}  // namespace retrylife::frc