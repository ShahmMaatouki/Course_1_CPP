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

    int sum = 0;

    for (int i = 1; i <= Number; i += 2)
    {
        sum += i;
        cout << i << endl;
    }
    
    cout << sum << endl;

    return Number, sum;
}

int main()
{

    F_ReadIntNumbersInRange(18, 45);

    return 0;
}