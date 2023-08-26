// Task 2
// Create a class Airplane.
// Using operator overloading, implement:
// ■ Check for the equality of aircraft types("==" operation);
// ■ Increaseand decrease of passengers in the aircraft cabin("++" and "––" operations in prefix form);
// ■ Comparison of two planes by the maximum possible number of passengers on board(">" operation).
//

#include <iostream>
#include "Airplane.h"

using namespace std;

int main()
{
    // Create instances of the Airplane class
    Airplane a1("Boeing 737", 150, 200);
    Airplane a2("Airbus A320", 120, 180);
    Airplane a3("Boeing 737", 170, 200);

    // Display information about the airplanes
    cout << "Airplane 1: " << a1.getType() << ", Passengers: " << a1.getPassengers() << ", Max Passengers: " << a1.getMaxPassengers() << endl;
    cout << "Airplane 2: " << a2.getType() << ", Passengers: " << a2.getPassengers() << ", Max Passengers: " << a2.getMaxPassengers() << endl;
    cout << "Airplane 3: " << a3.getType() << ", Passengers: " << a3.getPassengers() << ", Max Passengers: " << a3.getMaxPassengers() << endl;

    // Demonstrate the equality operator
    if (a1 == a3) {
        cout << endl << "Airplane 1 is the same type as Airplane 3." << endl;
    }
    else {
        cout << endl << "Airplane 1 is not the same type as Airplane 3." << endl;
    }

    // Demonstrate the post-increment operator
    cout << endl << "Incrementing passengers of Airplane 2: ";
    a2++; // Increment passengers of Airplane 2
    cout << endl << "New Passengers: " << a2.getPassengers() << endl;

    // Demonstrate the pre-decrement operator
    cout << endl << "Decrementing passengers of Airplane 1: ";
    --a1; // Decrement passengers of Airplane 1
    cout << endl << "New Passengers: " << a1.getPassengers() << endl;

    // Demonstrate the greater than operator
    if (a1 > a2) {
        cout << endl << "Airplane 1 can carry more passengers than Airplane 2." << endl;
    }
    else {
        cout << endl << "Airplane 1 cannot carry more passengers than Airplane 2." << endl;
    }
}
