#pragma once

namespace retrylife::frc {
/**
 * Limelight stream mode setting
 */
enum StreamMode {

    STANDARD,  // Side-by-side streams if a webcam is attached to Limelight
    PIP_MAIN,  // The secondary camera stream is placed in the lower-right
               // corner of the primary camera stream
    PIP_SECONDARY,  // The primary camera stream is placed in the lower-right
                   // corner of the secondary camera stream
};
}  // namespace retrylife::frc