#include "HourlyEmployee.h"


HourlyEmployee::HourlyEmployee() : HourlyRate(0), hoursWorked(0)
{
}

HourlyEmployee::~HourlyEmployee()
{
}

void HourlyEmployee::setHourlyRate(float Hrate)
{
	if (Hrate != 0)
		HourlyRate = Hrate;
}

void HourlyEmployee::setHoursWorked(int xHoursWorked)
{
	hoursWorked = xHoursWorked;
}