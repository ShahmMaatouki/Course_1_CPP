#include <iostream>
using namespace std;


int F_ReadIntNumbersInRange( int From, int To)
{
    int A;
    int A_Input;

    cout << "ENetr Number of Char ? From (65) To (90) ? " << endl;
    cin >> A_Input;
    A = (char)65;
    
    while (A_Input < (char)65 && A_Input > (char)90)
    {
        cout << "Wrong!!";
        cout << "ENetr Number of Char ? From (65) To (90) ? " << endl;
        cin >> A_Input;
    }

    cout << "Your Char is : " << (char)A_Input << endl;

    return A, A_Input;
}

int main()
{

    F_ReadIntNumbersInRange(1, 100);

    return 0;
}