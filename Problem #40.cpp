#include <iostream>
using namespace std;

int main()
{
    float Bill;

    cout << "Enter the Bill ? ";
    cin >> Bill;

    Bill = Bill * 1.1;
    Bill = Bill * 1.16;
    
    cout << Bill;
    
    return 0;

}