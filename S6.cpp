#include <iostream>

using namespace std;

int main()
{
    int A = 10;
    int B = A++; //هنا البرنامج يضع قيمة أ في ب بعدها يزيد أ بمقدار 1
    cout << B << endl;
    cout << A << endl;
    
    B = ++A; //هنا يزيد أ بعدها يخزن القيمة كاملة في ب
    cout << B << endl;
    cout << A;
    

    return 0;
}