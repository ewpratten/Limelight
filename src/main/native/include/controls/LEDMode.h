#pragma once

namespace retrylife::frc {
/**
 * Limelight LED mode setting
 */
enum LEDMode {
    DEFAULT,  // Use pipeline default setting
    OFF,      // Force-enable LEDs
    BLINK,    // Force-disable LEDs
    ON,       // Blink LEDs
};
}  // namespace retrylife::frc