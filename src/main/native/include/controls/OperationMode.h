#pragma once

namespace retrylife::frc {
/**
 * Limelight operation mode setting
 */
enum OperationMode {
    VISION,  // Vision processor
    DRIVER,  // Driver Camera (Increases exposure, disables vision processing)
};
}  // namespace retrylife::frc