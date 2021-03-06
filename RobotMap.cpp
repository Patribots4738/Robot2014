// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
CANJaguar* RobotMap::driveTrainJaguarFrontLeft = NULL;
CANJaguar* RobotMap::driveTrainJaguarFrontRight = NULL;
CANJaguar* RobotMap::driveTrainJaguarBackLeft = NULL;
CANJaguar* RobotMap::driveTrainJaguarBackRight = NULL;
RobotDrive* RobotMap::driveTrainRobotDrive4 = NULL;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();
	driveTrainJaguarFrontLeft = new CANJaguar(2);
	
	
	driveTrainJaguarFrontRight = new CANJaguar(3);
	
	
	driveTrainJaguarBackLeft = new CANJaguar(4);
	
	
	driveTrainJaguarBackRight = new CANJaguar(6);
	
	
	driveTrainRobotDrive4 = new RobotDrive(driveTrainJaguarFrontLeft, driveTrainJaguarFrontRight,
              driveTrainJaguarBackLeft, driveTrainJaguarBackRight);
	
	driveTrainRobotDrive4->SetSafetyEnabled(true);
        driveTrainRobotDrive4->SetExpiration(0.1);
        driveTrainRobotDrive4->SetSensitivity(0.5);
        driveTrainRobotDrive4->SetMaxOutput(1.0);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
