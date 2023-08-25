#pragma once
#include "SalaryWorker.h"

class Manager : public SalaryWorker
{
private:
    int clientCount; // Number of clients managed by the manager
public:
    // Default constructor
    Manager();

    // Parameterized constructor
    Manager(string firstName, string lastName, double salary, double bonus, int clientCount);

    // Set the number of clients managed by the manager
    void setClientCount(int clientCount);

    // Get the number of clients managed by the manager
    int getClientCount();

    // Calculate the bonus based on the number of clients managed
    double calculateBonus() override;

    // Display the manager's information including calculated bonus and client count
    void display();
};

