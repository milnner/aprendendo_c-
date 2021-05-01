//SavingClassOutline

#include <cstdlib>
#include <cstdio>
#include <iostream>
using namespace std;

#include "Savings.h"

int main()
{
    Savings s;
    s.accountNumber = 123456;
    s.balance = 0.0;

    cout    << "Depositing 10 to account " 
            << s.accountNumber << endl;

    s.deposit(10);
    cout    << "Balance is " 
            << s.balance << endl;
    
    cout << "press Enter to continue";
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}