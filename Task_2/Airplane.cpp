#include "Airplane.h"

// Default constructor
Airplane::Airplane()
{
	type = "";           // Initialize type to an empty string
	passengers = 0;      // Initialize passengers to 0
	maxPassengers = 0;   // Initialize maxPassengers to 0
}

// Parameterized constructor
Airplane::Airplane(string type, int passengers, int maxPassengers)
{
	this->type = type;             // Initialize type with the provided value
	this->passengers = passengers; // Initialize passengers with the provided value
	this->maxPassengers = maxPassengers; // Initialize maxPassengers with the provided value
}

// Set the type of the airplane
void Airplane::setType(string type)
{
	this->type = type; // Update the type with the provided value
}

// Set the number of passengers on the airplane
void Airplane::setPassengers(int passengers)
{
	this->passengers = passengers; // Update the passengers with the provided value
}

// Set the maximum number of passengers the airplane can hold
void Airplane::setMaxPassengers(int maxPassengers)
{
	this->maxPassengers = maxPassengers; // Update the maxPassengers with the provided value
}

// Get the type of the airplane
string Airplane::getType()
{
    return type;
}

// Get the current number of passengers on the airplane
int Airplane::getPassengers()
{
    return passengers;
}

// Get the maximum number of passengers the airplane can hold
int Airplane::getMaxPassengers()
{
    return maxPassengers;
}

// Overloaded equality operator
bool Airplane::operator==(Airplane plane)
{
    return this->type == plane.type; // Compare the types of two airplanes
}

// Overloaded post-increment operator
Airplane Airplane::operator++(int)
{
    Airplane temp = *this; // Create a temporary copy of the current airplane
    passengers++; // Increment the number of passengers
    return temp; // Return the original airplane before incrementing
}

// Overloaded pre-decrement operator
Airplane Airplane::operator--()
{
    --passengers; // Decrement the number of passengers
    return *this; // Return the modified airplane
}

// Overloaded greater than operator
bool Airplane::operator>(Airplane plane)
{
    return this->maxPassengers > plane.maxPassengers; // Compare the maxPassengers of two airplanes
}
