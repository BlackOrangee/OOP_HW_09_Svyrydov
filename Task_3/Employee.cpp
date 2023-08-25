#include "Employee.h"

// Default constructor
Employee::Employee()
{
	firstName = "";
	lastName = "";
}

// Parameterized constructor
Employee::Employee(string firstName, string lastName)
{
	this->firstName = firstName;
	this->lastName = lastName;
}

// Set the first name of the employee
void Employee::setFirstName(string firstName)
{
	this->firstName = firstName;
}

// Set the last name of the employee
void Employee::setLastName(string lastName)
{
	this->lastName = lastName;
}

// Get the first name of the employee
string Employee::getFirstName()
{
	return firstName;
}

// Get the last name of the employee
string Employee::getLastName()
{
	return lastName;
}

// Display employee information
void Employee::display()
{
	cout << endl << "First Name: " << firstName << "\nLast Name: " << lastName << endl;
}