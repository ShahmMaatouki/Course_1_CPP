#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    int Area;
    float PI;
    int P;
    unsigned short A;
    unsigned short B;
    unsigned short C;

    PI = 3.14;

    cout << "Enter Your (A) ? ";
    cin >> A;
    cout << "Enter Your (B) ? ";
    cin >> B;
    cout << "Enter Your (C) ? ";
    cin >> C;

    P = (A + B + C) / 2;

    Area = PI * pow((A * B * C) / (4 * sqrt(P * (P - A)*(P - B)*(P - C))), 2);

    cout << round(Area);

    return 0;
}

