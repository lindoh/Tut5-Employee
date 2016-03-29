#include "SalaryEmployee.h"


SalaryEmployee::SalaryEmployee() : MonthlySalary(0)		//initialising employee monthly salary with zero
{
}


SalaryEmployee::~SalaryEmployee()
{
}

void SalaryEmployee::setSalary(float xSalary)
{
	MonthlySalary = xSalary;
}

float SalaryEmployee::salary()
{
	return MonthlySalary;
}

