#include <iostream>
using namespace std;

int main()
{
    unsigned short TotalBill;
    unsigned short TotalPaid;
    unsigned short Remainder;
    
    cout << "TotalBill is ? ";
    cin >> TotalBill;
    cout << "TotalPaid is ? ";
    cin >> TotalPaid;

    Remainder = TotalPaid - TotalBill;

    cout << "The remaining amount for the customer " << Remainder;

    return 0;
}