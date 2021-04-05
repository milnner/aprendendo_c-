//charDisplay
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void displayCharArray(char charArray[], int sizeOfArray);

int main()
{
    char name[] = {'m','i','l','n','n','e','r'};
    displayCharArray(name, 7);
    cout << endl;
    cout << "press enter to continue...";
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

void displayCharArray(char charArray[], int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << charArray[i];
    }
    return;
}