#pragma config(Sensor, S1,     t1,             sensorEV3_Touch)
#pragma config(Sensor, S2,     t2,             sensorEV3_Touch)
#pragma config(Sensor, S3,     t3,             sensorEV3_Touch)
#pragma config(Sensor, S4,     t4,             sensorEV3_Touch)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while (true)
	{
			SensorValue[t1]==1?motor[motorA]=30:motor[motorA]=-30;
			SensorValue[t2]==1?motor[motorB]=30:motor[motorB]=-30;
			SensorValue[t3]==1?motor[motorC]=30:motor[motorC]=-30;
			SensorValue[t4]==1?motor[motorD]=30:motor[motorD]=-30;
	}
}
