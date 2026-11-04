#include <iostream>
using namespace std;

float F_Area()
{
    float Area, BI, R;

    BI = 3.14;

    cout << "Enter R ? ";
    cin >> R;

    Area = BI * (R * R);

    cout << Area;

    return Area;
}

int main()
{
    F_Area();
    return 0;
}

