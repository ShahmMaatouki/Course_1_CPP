#include <iostream>
using namespace std;

struct S_ATM
{
    int PIN;
    unsigned int Balance;
};

void F_ATM_Read(S_ATM &Info)
{
    cout << "Enter Your PIN ? " << endl;
    cin >> Info.PIN;
    Info.Balance = 7540;
}

void F_ATM_System(S_ATM &Info)
{
    while (true)
    {
        if (Info.PIN == 1234)
        {
            cout << "Your Balance is " << Info.Balance << endl;
            break;
        }
        else
        {
            cout << "Wrong (PIN) " << endl;
            
            cout << "Enter Your PIN ? " << endl;
            cin >> Info.PIN;
        }
    }
}

int main()
{
    S_ATM DATA_1;

    F_ATM_Read(DATA_1);
    F_ATM_System(DATA_1);
}