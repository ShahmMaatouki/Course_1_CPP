#include <iostream>
using namespace std;

float F_Circle_Area_in_Square()
{
    float Area, BI, A;

    BI = 3.14;

    cout << "Enter A ? ";
    cin >> A;

    Area = BI * (A * A) / 4;

    cout << Area;

    return Area;
}

int main()
{
    F_Circle_Area_in_Square();

    return 0;
}

