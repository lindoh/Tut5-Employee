#ifndef SalaryEmployee_H
#define SalaryEmployee_H
#include <iostream>
#include "Employee.h"

using namespace std;

class SalaryEmployee : public Employee
{
private:
	float salary;			//employee montly salary

public:
	SalaryEmployee();		//default constructor
	~SalaryEmployee();		//destructor
	void setSalary(float);		//set the montly salary of employee
};

#endif
