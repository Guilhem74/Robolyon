/*
 * BaseRoulante.h
 *
 *  Created on: 27 d�c. 2016
 *      Author: REBAUDET Thomas
 */
#include "WPILib.h"
#define SRC_BASEROULANTE_H_

class BaseRoulante {
public:
	virtual ~BaseRoulante();
	void mvtJoystick(Joystick*, ADXRS450_Gyro* );
private:
	float zCoeff = 0.5;
};

#endif /* SRC_BASEROULANTE_H_ */