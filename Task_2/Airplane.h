#pragma once
#include <iostream>

using namespace std;

class Airplane
{
private:
	string type;           // Type of the airplane
	int passengers;        // Current number of passengers on the airplane
	int maxPassengers;     // Maximum number of passengers the airplane can carry

public:
	// Default constructor
	Airplane();

	// Parameterized constructor
	Airplane(string, int, int);

	// Setter for airplane type
	void setType(string);

	// Setter for current passengers
	void setPassengers(int);

	// Setter for maximum passengers
	void setMaxPassengers(int);

	// Getter for airplane type
	string getType();

	// Getter for current passengers
	int getPassengers();

	// Getter for maximum passengers
	int getMaxPassengers();

	// Overloaded equality operator
	bool operator==(Airplane);

	// Postfix increment operator
	Airplane operator++(int);

	// Prefix decrement operator
	Airplane operator--();

	// Overloaded greater than operator
	bool operator>(Airplane);
};


