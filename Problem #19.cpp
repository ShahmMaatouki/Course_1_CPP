#include <iostream>
using namespace std;

int main()
{
    unsigned short Number_D;
    float Area;
    float PI;
    
    PI = 3.14;

    cout << "Enter Area of Circle ? ";
    cin >> Number_D;
    
    Area = PI * (Number_D * Number_D) / 4;

    cout << "Your Area Of Circle is " << Area;
    
    
    return 0;
}