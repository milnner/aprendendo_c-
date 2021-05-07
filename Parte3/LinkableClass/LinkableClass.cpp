#include <cstdlib>
#include <cstdio>
#include <iostream>
using namespace std;

class NameDataSet
{
    public:
        string sName;
        NameDataSet* pNext;
};

NameDataSet* pHead = nullptr;
void add(NameDataSet* pNDS)
{
    pNDS->pNext = pHead;
    pHead = pNDS;
}

NameDataSet* getData()
{
    string name;
    cout    << "Enter name: ";
    cin     >> name;
    
    if (name == "exit")
    {
        return nullptr;
    }

    NameDataSet* pNDS = new NameDataSet;
    pNDS->sName = name;
    pNDS->pNext = nullptr;

    return pNDS;
}

int main()
{
    cout    << "Read Names of sstudents \n"
            << "Enter 'exit' for first name to exit"
            << endl;
    
    NameDataSet* pNDS;
    while (pNDS = getData())
    {
        add(pNDS);
    }

    cout << "\nEntries: " << endl;
    for(NameDataSet     *pIter = pHead;
                        pIter; 
                        pIter = pIter->pNext)
    {
        cout << pIter->sName << endl;
    }

    cout << "press Enter to continue;" << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}