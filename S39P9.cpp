#include <iostream>
using namespace std;

int main()
{
    int ATM;
    int PIN;

    cout << "Enter PIN ? " << endl;
    cin >> PIN;
    
    while (PIN != 123)
    {
        cout << "** Wrong PIN **" << endl;
        cout << "Enter PIN ? " << endl;
        cin >> PIN;
    }
    cout << "Curict :}";

    return 0;
}