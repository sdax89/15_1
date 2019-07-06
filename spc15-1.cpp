// Chapter 15, Programming Challenge 1: Employee and ProductionWorker classes
#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"
using namespace std;

// Function prototype
void displayInfo(ProductionWorker);

int main()
{
	//try
	//{
		// valid production worker
		ProductionWorker pw("John Jones", "123", "10/12/2010", 2, 18.00);
		displayInfo(pw);
		 
		// invalid employee-Employee class should throw an exception
		// named: InvalidEmployeeNumber
		//	 receives number that is less than 0 or greater than 9999
		ProductionWorker bh("Bill Hickock", "39", "05/27/1837", 2, 18.00);
		displayInfo(bh);
		
		// invalid shift 
		ProductionWorker we("Wyatt Earp", "80", "03/19/1848", 2, 18.00);
		displayInfo(we);

		// invalid pay rate
		ProductionWorker dh("Doc Holliday", "36", "08/14/1851", 2, 18.00);
		displayInfo(dh);

		try
		{
			pw.getHireDate;
			pw.setShift;
			pw.setPayRate;

			bh.setHireDate;
			bh.setShift;
			bh.setPayRate;

			we.setHireDate;
			we.setShift;
			we.setPayRate;

			dh.setHireDate;
			dh.setShift;
			dh.setPayRate;
		}
		catch (Employee::InvalidEmployeeNumber)
		{
			cout << "Error Invalid Employee Number" << endl;

		}
		catch (ProductionWorker::InvalidShift)
		{
			cout << "Error Invalid Shift" << endl;
		}
		catch (ProductionWorker::InvalidPayRate)
		{
			cout << "Error Invalid PayRate" << endl;
		}
		system("pause");
		return 0;
	//}
}

//******************************************************
// The displayInfo function displays a production      *
// worker's employment information.                    *
//******************************************************
void displayInfo(ProductionWorker e)
{
	cout << setprecision(2) << fixed << showpoint;
	cout << "Name: " 
		 << e.getName() << endl;
	cout << "Employee number: " 
		 << e.getNumber() << endl;
	cout << "Hire date: " 
		 << e.getHireDate() << endl;
	cout << "Hired: " 
		 << e.getShiftName() << endl;
	cout << "Shift number: " 
		 << e.getShiftNumber() << endl;
	cout << "Pay rate: " 
		 << e.getPayRate() << endl << endl;
}