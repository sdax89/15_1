// Specification file for the Employee class
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
private:
	string name;		// Employee name
	string number;		// Employee number
	string hireDate;	// Hire date

public:
	// Default constructor
	Employee()
	{ 
		name = ""; number = "" ; hireDate = ""; 
	}

	// Constructor
	Employee(string aName, string aNumber, string aDate)
	{
		name = aName; 
		number = aNumber; 
		hireDate = aDate; 
	}

	class InvalidEmployeeNumber { };
	// Mutators
	void setName(string n)
	{
		name = n;
	}

	void setNumber(int num)
	{
	//	if (num < 0 || num > 9999)
	//		throw InvalidEmployeeNumber();
	//	else
	//		number = num;
	}

	void setHireDate(string date)
	{
		hireDate = date; 
	}

	// Accessors
	string getName() const
	{
		return name; 
	}

	string getNumber() 
	{
		return number; 
	}

	string getHireDate() const
	{
		return hireDate; 
	}
};




#endif