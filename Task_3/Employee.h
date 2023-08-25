#pragma once
#include <iostream>

using namespace std;

class Employee
{
private:
	string firstName;    // First name of the employee
	string lastName;     // Last name of the employee
public:
	// Default constructor
	Employee();

	// Parameterized constructor
	Employee(string, string);

	// Set the first name of the employee
	void setFirstName(string);

	// Set the last name of the employee
	void setLastName(string);

	// Get the first name of the employee
	string getFirstName();

	// Get the last name of the employee
	string getLastName();

	// Abstract method to calculate the salary (pure virtual function)
	virtual double calculateSalary() = 0;

	// Virtual method to display employee information
	virtual void display();
};

