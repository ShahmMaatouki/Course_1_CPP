#include <iostream>
using namespace std;

float F_Circle_Area()
{
    float Area, BI, D;
    BI = 3.14;

    cout << "Enter D ? ";
    cin >> D;

    Area = BI * (D * D) / 4;

    cout << Area;

    return Area;
}

int main()
{
    F_Circle_Area();
    return 0;
}

