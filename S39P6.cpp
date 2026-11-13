#include <iostream>
using namespace std;


int F_ReadIntNumbersInRange( int From, int To)
{
    int Number;
    int Number_Power;

    cout << "Plase Enter Number From " << From << " To " << To << " ? " << endl;
    cin >> Number;
    cout << "\n";

    cout << "Plase Enter Number Power From " << From << " To " << To << " ? " << endl;
    cin >> Number_Power;
    cout << "\n";
    
    while (Number < 1 || Number > 100 && Number_Power < 1 || Number_Power > 100)
    {
        cout << " Wrong Number !! " << endl;
        
        cout << "Plase Enter Number From " << From << " To " << To << " ? " << endl;
        cin >> Number;
        cout << "\n";
    
        cout << "Plase Enter Number Power From " << From << " To " << To << " ? " << endl;
        cin >> Number_Power;
        cout << "\n";
    }
    
    cout << "Your Number Is : " << Number << endl;
    cout << "\n";
    
    cout << "Your Number Power Is : " << Number_Power << endl;
    cout << "\n";

    int sum = 1;

    for (int i = 1; i <= Number; i++)
    {
        sum = i * Number_Power;
    }
    
    cout << "\n" << "After Power : " << sum + sum << endl;

    return Number, sum, Number_Power;
}

int main()
{

    F_ReadIntNumbersInRange(1, 100);

    return 0;
}