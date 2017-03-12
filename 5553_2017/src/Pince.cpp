/*
 * Pince.cpp
 *

 *      Author: REBAUDET Thomas
 */

#include "WPILib.h"
#include <RobotDrive.h>
#include <DoubleSolenoid.h>
#include "constantes.h"
#include "Pince.h"
#include "Bac.h"

Pince::Pince(): m_verinLev(4,5),m_verinSer(6,7)
{
	// TODO Auto-generated constructor stub
	m_verinLev.Set(frc::DoubleSolenoid::kReverse);

	m_verinSer.Set(frc::DoubleSolenoid::kForward);
	limitSwitch = new AnalogInput(1);

}
Pince::~Pince()
{

}


void Pince::desserrerPince()

{
	    m_verinSer.Set(frc::DoubleSolenoid::kForward);
}


void Pince::serrerPince()

{
		m_verinSer.Set(frc::DoubleSolenoid::kReverse);

}


void Pince::leverPince()
{

		m_verinLev.Set(frc::DoubleSolenoid::kForward);



}

void Pince::abaisserPince()
{
		m_verinLev.Set(frc::DoubleSolenoid::kReverse);

}
