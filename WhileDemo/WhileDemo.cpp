#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    int nLoopCount;
    cout << "Enter loop count";
    cin >> nLoopCount;

    while (nLoopCount > 0)
    {
            nLoopCount = nLoopCount - 1;
            cout << "Only " << nLoopCount
                 << " loops to go" << endl;
            
    }
    cout << "Press enter to continue...";
    cin.ignore(10,'\n');
    cin.get();
    return 0;
}