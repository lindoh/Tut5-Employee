#ifndef Employee_H
#define Employee_H
#include <iostream>

using namespace std;

class Employee
{
private:
	const string EmployeeName;			//name of employee
	const int RegNumber;				//registration or staff number of each employee

public:
	Employee();
	Employee(const string, const int);			//class employee constructor
	~Employee();								//class employee destructor
	string name();								//method name() returns the name of employee
	int staffNumber();
	virtual float salary() = 0;					//returns salary per month
	static int numberOfEmployees;				//keeps track of the number of employees
};

#endif