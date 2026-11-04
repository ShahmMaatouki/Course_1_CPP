#include <iostream>
using namespace std;

float F_Area()
{
    float Area, BI, B, A;

    BI = 3.14;

    cout << "Enter A ? ";
    cin >> A;
    cout << "Enter B ? ";
    cin >> B;

    Area = BI * ((B * B) / 4)* (2 * A - B) / (2 * A + B);

    cout << Area;

    return Area;
}

int main()
{
    F_Area();
    return 0;
}