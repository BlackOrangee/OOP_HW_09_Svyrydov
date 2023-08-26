#include "Book.h"
#include <ostream>
#include <iostream>

using namespace std;

// Default constructor
Book::Book()
{
	name = "";
	author = "";
	year = 0;
}

// Parameterized constructor
Book::Book(string name, string author, int year)
{
	this->name = name;
	this->author = author;
	this->year = year;
}
// Define the setName function to set the name of the book
void Book::setName(string name)
{
	this->name = name;
}

// Define the setAuthor function to set the author of the book
void Book::setAuthor(string author)
{
	this->author = author;
}

// Define the setYear function to set the publication year of the book
void Book::setYear(int year)
{
	this->year = year;
}

// Define the getName function to get the name of the book
string Book::getName()
{
	return name;
}

// Define the getAuthor function to get the author of the book
string Book::getAuthor()
{
	return author;
}

// Define the getYear function to get the publication year of the book
int Book::getYear()
{
	return year;
}


// Overloading the equality operator ==
bool Book::operator==(Book a)
{
	if (this->name == a.name && this->author == a.author)
	{
		return true;
	}
	return false;
}

// Overloading the inequality operator !=
bool Book::operator!=(Book a)
{
	if (this->name != a.name && this->author != a.author)
	{
		return true;
	}
	return false;
}

// Overloaded operator<< to output Book object to an ostream
ostream& operator<<(ostream& stream, Book& book)
{
	stream << "Name: " << book.getName()
		<< ", Author: " << book.getAuthor()
		<< ", Year : " << book.getYear();

	return stream;
}

// Overloaded operator>> to input data into a Book object from an istream
istream& operator>>(istream& stream, Book& book)
{
	string name, author;
	int year;

	// Read data from the input stream
	cout << "Enter book name: ";
	stream >> name;

	cout << "Enter author name: ";
	stream >> author;

	cout << "Enter publication year: ";
	stream >> year;

	// Set the attributes of the Book object
	book.setName(name);
	book.setAuthor(author);
	book.setYear(year);

	return stream;
}