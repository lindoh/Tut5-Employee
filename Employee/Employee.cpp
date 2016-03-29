#include "Employee.h"

Employee::Employee() :EmployeeName(0), RegNumber(0)
{}

Employee::Employee(const string xEmployeeName, const int xRegNumber) :
EmployeeName(xEmployeeName), RegNumber(xRegNumber) {}


Employee::~Employee()
{
}

string Employee::name()
{
	return EmployeeName;
}

int Employee::staffNumber()
{
	return RegNumber;
}


