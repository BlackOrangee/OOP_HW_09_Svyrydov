#include "SalaryWorker.h"

// Default constructor
SalaryWorker::SalaryWorker()
{
    salary = 0;
    bonus = 1;
}

// Parameterized constructor
SalaryWorker::SalaryWorker(string firstName, string lastName, double salary, double bonus) : Employee(firstName, lastName)
{
    this->salary = salary;
    this->bonus = bonus;
}

// Set the base salary of the salary worker
void SalaryWorker::setSalary(double salary)
{
    this->salary = salary;
}

// Set the bonus of the salary worker
void SalaryWorker::setBonus(double bonus)
{
    this->bonus = bonus;
}

// Get the base salary of the salary worker
double SalaryWorker::getSalary()
{
    return salary;
}

// Get the bonus of the salary worker
double SalaryWorker::getBonus()
{
    return bonus;
}

// Calculate the total salary of the salary worker (including base salary and bonus)
double SalaryWorker::calculateSalary()
{
    return salary + bonus;
}