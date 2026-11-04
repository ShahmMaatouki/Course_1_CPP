#include <iostream>
using namespace std;

float F_Area()
{
    float Area, BI, P, A, B, C, T;

    BI = 3.14;

    cout << "Enter A ? ";
    cin >> A;
    cout << "Enter B ? ";
    cin >> B;
    cout << "Enter C ? ";
    cin >> C;

    P = (A + B + C) / 2;

    T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
    T = T * T;

    Area = BI * T;

    cout << Area;

    return Area;
}

int main()
{
    F_Area();
    return 0;
}

