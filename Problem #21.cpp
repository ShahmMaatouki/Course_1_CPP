#include <iostream>
using namespace std;

int main()
{
    unsigned short L;
    float Area;
    float PI;

    PI = 3.14;

    cout << "Enter Your Circle Area ? ";
    cin >> L;

    Area = (L * L / (4 * PI));

    cout << "Your Area of Circle is " << Area;
    
    return 0; 

}