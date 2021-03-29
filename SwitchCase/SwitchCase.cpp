//SwitchCase

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Enter A 1, 2, or 3: ";
    cin >> choice;
    cout << endl;

    switch (choice)
    {
        case 1:
        case 2:
            cout << "its number is 1 or 2...";
            break;
        case 3:
            cout << "its number is 3 ...";
            break;
        default:
            cout << "its number is less than 0 or greater than three";
            break;
    }

    cout << endl << "press enter to be continue... " << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}