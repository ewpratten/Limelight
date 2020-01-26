#pragma once

namespace retrylife::frc {

/**
 * Limelight calibrated crosshair for use with raw contours
 */
class Crosshair {
   private:
    double x, y;

   public:
    /**
     * Create a Crosshair
     *
     * @param x X coord in normalized screen space
     * @param y Y coord in normalized screen space
     */
    Crosshair(double x, double y);

    /**
     * Get normalized X coordinate
     *
     * @return X coordinate
     */
    double getX();

    /**
     * Get normalized Y coordinate
     *
     * @return Y coordinate
     */
    double getY();
};
}  // namespace retrylife::frc