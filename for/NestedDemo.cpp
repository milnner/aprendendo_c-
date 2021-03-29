//NestedDemo

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    cout << "this program sums multiple series \n"
         << "of numbers. Terminate each sequence\n"
         << "by entering a negative number.\n"
         << "Terminate the series by entering two\n"
         << "negative numbers in a row\n";
        
    int accumulator;

    for (;;)
    {
        cout << "start the next sequence\n";
        accumulator = 0;

        for (;;)
        {
            int nValue = 0;
            cout << "Enter next number: ";
            cin >> nValue;

            if (nValue < 0)
        {
            break;
        }
        accumulator += nValue;
        }
        if (accumulator == 0)
        {
            break;
        }
            cout << "the total for this sequence is "
                 << accumulator << endl << endl;
            
    }
    cout << "press Enter to be continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}