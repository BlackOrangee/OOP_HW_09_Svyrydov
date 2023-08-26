#pragma once
#include <ostream>
#include <iostream>

using namespace std;

class Book
{
private:
	string name;    // Stores the name of the book
	string author;  // Stores the author of the book
	int year;       // Stores the publication year of the book

public:
	// Default constructor
	Book();

	// Parameterized constructor
	Book(string, string, int);

	// Setter methods
	void setName(string);
	void setAuthor(string);
	void setYear(int);

	// Getter methods
	string getName();
	string getAuthor();
	int getYear();

	// Overloading the equality operator ==
	bool operator==(Book a);

	// Overloading the inequality operator !=
	bool operator!=(Book a);
};

// Overloaded operator<< to output Book object to an ostream
ostream& operator<<(ostream&, Book&);

// Overloaded operator>> to input data into a Book object from an istream
istream& operator>>(istream&, Book&);