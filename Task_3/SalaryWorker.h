#pragma once
#include "Employee.h"

class SalaryWorker : public Employee
{
private:
    double salary; // Base salary of the salary worker
    double bonus;  // Bonus of the salary worker
public:
    // Default constructor
    SalaryWorker();

    // Parameterized constructor
    SalaryWorker(string firstName, string lastName, double salary, double bonus);

    // Set the base salary of the salary worker
    void setSalary(double salary);

    // Set the bonus of the salary worker
    void setBonus(double bonus);

    // Get the base salary of the salary worker
    double getSalary();

    // Get the bonus of the salary worker
    double getBonus();

    // Calculate the bonus of the salary worker (to be implemented in derived classes)
    virtual double calculateBonus() = 0;

    // Calculate the total salary of the salary worker (including base salary and bonus)
    double calculateSalary();
};