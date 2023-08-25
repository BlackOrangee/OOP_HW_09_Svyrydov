#include "Manager.h"

// Default constructor
Manager::Manager()
{
	clientCount = 0;
}

// Parameterized constructor
Manager::Manager(string firstName, string lastName, double salary, double bonus, int clientCount) : SalaryWorker(firstName, lastName, salary, bonus)
{
	this->clientCount = clientCount;
}

// Set the number of clients managed by the manager
void Manager::setClientCount(int clientCount)
{
	this->clientCount = clientCount;
}

// Get the number of clients managed by the manager
int Manager::getClientCount()
{
	return clientCount;
}

// Calculate the bonus based on the number of clients managed
double Manager::calculateBonus()
{
	if (clientCount > 200)
	{
		setBonus(getBonus() * 3);
		return getBonus();
	}
	if (clientCount > 100)
	{
		setBonus(getBonus() * 2);
		return getBonus();
	}
	return getBonus();
}

// Display the manager's information including calculated bonus and client count
void Manager::display()
{
	cout << endl << getFirstName() << " " << getLastName() << endl;
	cout << "salary: " << getSalary() << ", bonus: " << calculateBonus() << ", client count: " << clientCount << ", month salary: " << calculateSalary() << endl;
}