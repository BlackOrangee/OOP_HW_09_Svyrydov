#include "Worker.h"

// Default constructor
Worker::Worker() : Employee()
{
    hoursNumber = 0;
    hourlyRate = 0;
}

// Parameterized constructor
Worker::Worker(string firstName, string lastName, int hoursNumber, int hourlyRate) : Employee(firstName, lastName)
{
    this->hoursNumber = hoursNumber;
    this->hourlyRate = hourlyRate;
}

// Set the number of hours the worker has worked
void Worker::setHoursNumber(int hoursNumber)
{
    this->hoursNumber = hoursNumber;
}

// Set the hourly rate of the worker
void Worker::setHourlyRate(int hourlyRate)
{
    this->hourlyRate = hourlyRate;
}

// Get the number of hours the worker has worked
int Worker::getHoursNumber()
{
    return hoursNumber;
}

// Get the hourly rate of the worker
int Worker::getHourlyRate()
{
    return hourlyRate;
}

// Calculate the salary of the worker based on hours worked and hourly rate
double Worker::calculateSalary()
{
    if (hoursNumber > 40)
    {
        int temp = hoursNumber - 40;
        int salary = hourlyRate * 40;
        salary = salary + temp * hourlyRate * 2;
        return salary;
    }
    return hoursNumber * hourlyRate;
}

// Display the worker's information
void Worker::display()
{
    cout << endl << getFirstName() << " " << getLastName() << endl;
    cout << "hours number: " << hoursNumber << ", hourly rate: " << hourlyRate << ", month salary: " << calculateSalary() << endl;
}