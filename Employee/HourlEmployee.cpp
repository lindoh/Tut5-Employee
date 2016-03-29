#include "HourlyEmployee.h"


HourlyEmployee::HourlyEmployee() : HourlyRate(0), hoursWorked(0)
{
}

HourlyEmployee::~HourlyEmployee()
{
}

void HourlyEmployee::setHourlyRate(float Hrate)
{	
	if (hoursWorked !=0 && Hrate !=0 )
		HourlyRate = Hrate;
}

void HourlyEmployee::setHoursWorked(int xHoursWorked)
{
	hoursWorked = xHoursWorked;
}


float HourlyEmployee::salary()
{
	return hoursWorked*HourlyRate;		//hours worked in one month multiplied by hourly Rate
}