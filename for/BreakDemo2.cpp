//BreakDemo2 faz uso do break e do continue

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    int accumulator;
    cout << "this program sums values from the user\n"
         << "terminate by a 0"
         << endl;

    for(;;)
    {
        int nValue;
        cout << "Enter the next value: ";
        cin >> nValue;

        if (nValue < 0)
        {
            cout << "Negative numbers is not allowed\n" << endl;
            continue;
        };

        if (nValue == 0)
        {
            break;
        };
        accumulator += nValue;

    };
    
    cout << "The sums of numbers is " << accumulator << endl;
    cout << "press Enter to be continued..." << endl;
    cin.ignore(10, '\n');
    cin.get();

    return 0;
}