#include "Salesman.h"

// Default constructor
Salesman::Salesman()
{
	planPercentage = 0;
}

// Parameterized constructor
Salesman::Salesman(string firstName, string lastName, double salary, double bonus, double planPercentage)
	: SalaryWorker(firstName, lastName, salary, bonus)
{
	this->planPercentage = planPercentage;
}

// Set the percentage of the sales plan achieved by the salesman
void Salesman::setPlanPercentage(double planPercentage)
{
	this->planPercentage = planPercentage;
}

// Get the percentage of the sales plan achieved by the salesman
double Salesman::getPlanPercentage()
{
	return planPercentage;
}

// Calculate the bonus based on the sales plan percentage
double Salesman::calculateBonus()
{
	// Update the bonus based on the plan percentage and return the updated bonus
	setBonus(getBonus() * planPercentage / 100.0);
	return getBonus();
}

// Display the salesman's information including calculated bonus and plan percentage
void Salesman::display()
{
	cout << endl << getFirstName() << " " << getLastName() << endl;
	cout << "salary: " << getSalary() << ", bonus: " << calculateBonus() << ", plan percentage: " << planPercentage << ", month salary: " << calculateSalary() << endl;
}
