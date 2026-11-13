#include <iostream>
using namespace std;


int F_ReadIntNumbersInRange( int From, int To)
{
    int Number;

    cout << "Plase Enter Number From " << From << " To " << To << " ? " << endl;
    cin >> Number;
    cout << "\n";
    
    while (Number < 1 || Number > 100 )
    {
        cout << "(" << Number << ")" << " Wrong Number !! " << endl;
        cout << "Plase Enter Number From " << From << " To " << To << " ? ";
        cin >> Number;
        cout << "\n";
    }
    
    cout << "Your Numbers Is : " << Number << endl;
    cout << "\n";

    int sum = 1;

    for (int i = 1; i <= Number; i++)
    {
        sum *= i;
        cout << "Number (" << i << ") : " << i << endl;
    }
    
    cout << "\n" << "After Multiplication : " << sum << endl;

    return Number, sum;
}

int main()
{

    F_ReadIntNumbersInRange(1, 100);

    return 0;
}