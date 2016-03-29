#ifndef HourlyEmployee_H
#define HourlyEmployee_H
#include <iostream>
#include "Employee.h"

using namespace std;

class HourlyEmployee : public Employee
{
private:
	float HourlyRate;			//payment per hour of work
	int hoursWorked;		//number of hours worked

public:
	HourlyEmployee();
	~HourlyEmployee();
	void setHourlyRate(float);
	void setHoursWorked(int);
};

#endif
