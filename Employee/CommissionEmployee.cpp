#include "CommissionEmployee.h"


CommissionEmployee::CommissionEmployee()
{
	BaseSalary = 0;
	Rating = 0;
	Revenue = 0;
}


CommissionEmployee::~CommissionEmployee()
{
}


void CommissionEmployee::setBaseSalary()
{
	SalaryEmployee SalaryE;
	BaseSalary = SalaryE.salary();
}


void CommissionEmployee::setRevenue(int xRevenue)
{
	if (xRevenue >= 0)
		Revenue = xRevenue;
	else
		throw invalid_argument("Revenue must be greater or equal to zero");
}


void CommissionEmployee::setRate(float xRate)
{
	if (xRate > 0.00 && xRate < 1.0)
		Rating = xRate;
	else
		throw invalid_argument("Rate must be > 0 and < 1.0");
}


float CommissionEmployee::salary()
{
	if (Revenue >= 0 && Rating > 0 && Rating < 1.0)
		return BaseSalary + Revenue*Rating;
}
