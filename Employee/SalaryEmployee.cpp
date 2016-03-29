#include "SalaryEmployee.h"


SalaryEmployee::SalaryEmployee() : salary(10000)		//let employee montly salary = 10000
{
}


SalaryEmployee::~SalaryEmployee()
{
}

void SalaryEmployee::setSalary(float xSalary)
{
	salary = xSalary;
}

