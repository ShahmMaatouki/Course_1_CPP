#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float Area;
    float PI;
    unsigned short A;
    unsigned short B;


    PI = 3.14;

    cout << "Enter Your (A) ? ";
    cin >> A;
    cout << "Enter Your (B) ? ";
    cin >> B;

    Area = PI * pow(B, 2) / 4 * (2 * A - B) / (2 * A + B);
    
    cout << floor(Area);

    return 0;
}

