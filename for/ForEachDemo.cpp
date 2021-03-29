//ForEachDemo 

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    cout << "The prime less than 20 are: " << endl;
    for(int n : {2, 3, 5,7 , 11, 13, 17, 19})
    {
        cout << n << ", ";
    };
    cout << endl;
    cout << "press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}