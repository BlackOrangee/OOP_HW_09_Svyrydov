#pragma once
#include "SalaryWorker.h"

class Salesman : public SalaryWorker
{
private:
    double planPercentage; // Percentage of the sales plan achieved by the salesman
public:
    // Default constructor
    Salesman();

    // Parameterized constructor
    Salesman(string firstName, string lastName, double salary, double bonus, double planPercentage);

    // Set the percentage of the sales plan achieved by the salesman
    void setPlanPercentage(double planPercentage);

    // Get the percentage of the sales plan achieved by the salesman
    double getPlanPercentage();

    // Calculate the bonus based on the sales plan percentage
    double calculateBonus() override;

    // Display the salesman's information including bonus based on the sales plan
    void display() override;
};