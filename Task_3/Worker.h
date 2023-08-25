#pragma once
#include "Employee.h"

class Worker : public Employee
{
private:
    int hoursNumber;   // Number of hours the worker has worked
    int hourlyRate;    // Hourly rate of the worker
public:
    // Default constructor
    Worker();

    // Parameterized constructor
    Worker(string firstName, string lastName, int hoursNumber, int hourlyRate);

    // Set the number of hours the worker has worked
    void setHoursNumber(int hoursNumber);

    // Set the hourly rate of the worker
    void setHourlyRate(int hourlyRate);

    // Get the number of hours the worker has worked
    int getHoursNumber();

    // Get the hourly rate of the worker
    int getHourlyRate();

    // Calculate the salary of the worker based on hours worked and hourly rate
    double calculateSalary() override;

    // Display the worker's information
    void display() override;
};