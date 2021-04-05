//displayString
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void displayString(char charArray[]);

int main()
{
    char name[] = {'M', 'i', 'l', 'n', 'n', 'e', 'r', '\0'};
    displayString(name);
    cout << endl;
    
    cout << "press Enter to continue...";
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

void displayString(char charArray[])
{
    for (int i = 0; charArray[i] != '\0'; i++)
    {
        cout << charArray[i];
    }
    return;
}