#ifndef CommisionEmployee_H
#define CommissionEmployee_H
#include <iostream>
#include "Employee.h"
#include "SalaryEmployee.h"


class CommissionEmployee : public Employee
{
private:
	float BaseSalary;
	int Revenue;
	float Rating;

public:
	CommissionEmployee();
	~CommissionEmployee();
	void setBaseSalary();			//set employee base salary
	void setRevenue(int);				//set revenue commission
	void setRate(float);				//set Rate = base salary + commission based on revenue generated
	float salary();
};

#endif