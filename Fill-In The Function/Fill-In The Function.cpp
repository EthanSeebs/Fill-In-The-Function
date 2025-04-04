// Fill-In The Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector> // Needed for using std::vector
using namespace std; // Prevents us from having to use "std::"

// Defining a simple Car class
class Car {
public:
    // Public attributes for now; we will discuss "private" and "protected" next week
    string VIN; // Vehicle Identification Number (should be unique for each car)
    string make; // Car brand (e.g., Toyota, Ford)
    string model; // Specific model (e.g., Corolla, Mustang)
    int year; // Manufacturing year
    double mileage; // Current mileage of the car
    vector<string> owners; // List of previous and current owners

    // Constructor to initialize a Car object
    Car(string vin, string mk, string mdl, int yr, double miles, vector<string> ownerList) {
        VIN = vin;
        make = mk;
        model = mdl;
        year = yr;
        mileage = miles;
        owners = ownerList;
    }

    // Function to display car details
    void displayInfo() {
        cout << "VIN: " << VIN << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Mileage: " << mileage << " miles" << endl;

        // Displaying owners
        cout << "Owners: ";
        for (const string& owner : owners) {
            cout << owner << " ";
        }
        cout << endl;
    }
};

int main() {
    // Create a list of four previous owners
    vector<string> previousOwners = { "John Doe", "Jane Smith", "Alice Johnson", "Bob Brown" };

    // Instantiate a Car object
    Car myCar("1HGBH41JXMN109186", "Toyota", "Corolla", 2015, 45000.5, previousOwners);

    // Call displayInfo() to print the car's details
    myCar.displayInfo();

    return 0;
}

/*
Attributes that should be private:

1. **VIN**: The Vehicle Identification Number is a sensitive piece of data and should not be exposed publicly. It should be private to prevent unauthorized access or modification.

2. **Make, Model, Year, and Mileage**: These attributes are essential for the car's identity and shouldn't be directly modified without validation. It would be better to provide setter and getter functions to modify these values securely.

3. **Owners**: The list of owners could be considered sensitive personal information. Access to the list of previous owners should be limited, and it could be made private with proper methods to add or remove owners.
*/

