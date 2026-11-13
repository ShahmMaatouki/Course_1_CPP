#include <iostream>
using namespace std;


int F_ReadIntNumbersInRange( int From, int To)
{
    int Number;

    cout << "** Plase Enter Number From " << From << " To " << To << " Wright (-99) To Plus All Numbers **" << endl;
    cout << "\n";
    cout << "* Plase Enter Number (1) ?" << endl;
    cin >> Number;
    cout << "\n";

    int sum = 0;
    int i = 1;
    while (Number > -99)
    {
        sum += Number;
        i = i++;

        cout << "* Plase Enter Number " << "(" << i << ")" << " ? " << endl;
        cin >> Number;
        cout << "\n";
    }
    
    cout << "* Your Number Is : " << sum << endl;
    cout << "\n";
    
    return Number, sum;
}

int main()
{

    F_ReadIntNumbersInRange(1, 100);

    return 0;
}