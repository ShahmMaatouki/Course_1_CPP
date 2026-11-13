#include <iostream>
using namespace std;


int F_ReadIntNumbersInRange( int From, int To)
{
    int Number;

    cout << "Plase Enter Number From " << From << " To " << To << " ? " << endl;
    cin >> Number;
    cout << "\n";
    
    while (Number < 1 || Number > 45 )
    {
        cout << "(" << Number << ")" << " Wrong Number !! " << endl;
        cout << "Plase Enter Number From " << From << " To " << To << " ? " << endl;
        cin >> Number;
        cout << "\n";
    }
    
    cout << "Your Numbers Is : " << Number << endl;
    cout << "\n";
    
    for (int i = Number; i >= 1 ; i--)
    {
        cout << i << endl;
    }
    
    
    return Number;
}

int main()
{

    F_ReadIntNumbersInRange(100, 1);

    return 0;
}