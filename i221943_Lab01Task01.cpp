// i221943_Lab01Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {
    int day, month, year;


    cout << "Enter day: ";
    cin >> day;
    while (day < 1 || day > 31) {
        cout << "Invalid day! Please enter a valid day (1-31): ";
        cin >> day;
    }

    cout << "Enter month: ";
    cin >> month;
    while (month < 1 || month > 12) {
        cout << "Invalid month! Please enter a valid month (1-12): ";
        cin >> month;
    }

    cout << "Enter year: ";
    cin >> year;

   
    while (year < 0 || year > 9999) {
        cout << "Invalid year! Please enter a valid year: ";
        cin >> year;
    }
    cout << "You entered: " << day << "/" << month << "/" << year << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
