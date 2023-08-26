// Task 1
// Create a Book class to represent books with fields for title, author, and year of publication.
// Overload the == and != operators to compare books by title and author.
// Also, overload the input >> and output << operators for convenient inputand output of book data.
//

#include <iostream>
#include "Book.h"

using namespace std;

int main()
{
    // Create two Book objects
    Book book1("The Catcher in the Rye", "J.D. Salinger", 1951);
    Book book2("To Kill a Mockingbird", "Harper Lee", 1960);

    // Display the information of the first book
    cout << "Book 1 Information:" << endl;
    cout << book1 << endl;

    // Display the information of the second book
    cout << "\nBook 2 Information:" << endl;
    cout << book2 << endl;

    // Compare the two books for equality
    if (book1 == book2)
    {
        cout << "\nBook 1 is the same as Book 2." << endl;
    }
    else
    {
        cout << "\nBook 1 is not the same as Book 2." << endl;
    }

    Book book3;
	cin >> book3;

    Book book4;
	cin >> book4;

    // Display the information of the third book
    cout << "\nBook 3 Information:" << endl;
    cout << book3 << endl;

    // Display the information of the next book
    cout << "\nBook 4 Information:" << endl;
    cout << book4 << endl;

	if (book3 != book4)
	{
		cout << "\nBook 3 is not the same as Book 4." << endl;
	}
	else
	{
		cout << "\nBook 3 is the same as Book 4." << endl;
	}
}