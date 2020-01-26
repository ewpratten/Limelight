package ca.retrylife.frc.limelight;

import edu.wpi.first.networktables.NetworkTable;
import edu.wpi.first.networktables.NetworkTableInstance;
import edu.wpi.first.wpilibj.geometry.Rotation2d;

import static ca.retrylife.frc.limelight.util.NetworkTableUtil.simpleListener;

public class Limelight {

    /* Camera data stream */
    private NetworkTable table;

    /* Camera data */
    private boolean tv;
    private double tx, ty, ta, ts, tl, tshort, tlong, thor, tvert;
    private double[] camTran;

    public Limelight() {

        // Get the Limelight NetworkTable
        this.table = NetworkTableInstance.getDefault().getTable("limelight");

        // Register all listeners
        registerListeners();

    }

    /**
     * Registers all value listeners
     */
    private void registerListeners() {
        // TV
        simpleListener(this.table, "tv", (v) -> {
            this.tv = (v.getDouble() == 0.0) ? false : true;
        });

        // TX
        simpleListener(this.table, "tx", (v) -> {
            this.tx = v.getDouble();
        });

        // TY
        simpleListener(this.table, "ty", (v) -> {
            this.ty = v.getDouble();
        });

        // TA
        simpleListener(this.table, "ta", (v) -> {
            this.ta = v.getDouble();
        });

        // TL
        simpleListener(this.table, "tl", (v) -> {
            this.tl = v.getDouble();
        });

        // TSHORT
        simpleListener(this.table, "tshort", (v) -> {
            this.tshort = v.getDouble();
        });

        // TLONG
        simpleListener(this.table, "tlong", (v) -> {
            this.tlong = v.getDouble();
        });

        // THOR
        simpleListener(this.table, "thor", (v) -> {
            this.thor = v.getDouble();
        });

        // TVERT
        simpleListener(this.table, "tvert", (v) -> {
            this.tvert = v.getDouble();
        });

        // CAMTRAN
        simpleListener(this.table, "camtran", (v) -> {
            this.camTran = v.getDoubleArray();
        });

    }

    /**
     * Check if the Limelight has a target in view
     * 
     * @return Can see target?
     */
    public boolean hasTarget() {
        return this.tv;
    }

    /**
     * Get the target X angle in degrees from the crosshair
     * 
     * @return X angle
     */
    public double getX() {
        return this.tx;
    }

    /**
     * Get the target X Rotation from the crosshair
     * 
     * @return X Rotation
     */
    public Rotation2d getXRotation() {
        return Rotation2d.fromDegrees(getX());
    }

    /**
     * Get the target Y angle in degrees from the crosshair
     * 
     * @return Y angle
     */
    public double getY() {
        return this.ty;
    }

    /**
     * Get the target Y Rotation from the crosshair
     * 
     * @return Y Rotation
     */
    public Rotation2d getYRotation() {
        return Rotation2d.fromDegrees(getY());
    }

}