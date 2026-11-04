#include <iostream>
using namespace std;

float F_Area()
{
    float Area, BI, l;
    
    BI = 3.14;

    cout << "Enter L ? ";
    cin >> l;

    Area = (l * l) / (4 * BI);

    cout << Area;

    return Area;
}

int main()
{

    F_Area();

    return 0;
}

