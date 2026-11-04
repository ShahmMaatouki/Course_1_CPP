#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
    float Area;
    float PI;
    int D;

    PI = 3.14;

    cout << "Enter Your (D) ? ";
    cin >> D;

    Area = PI * pow(D, 2) / 4;

    cout << ceil(Area);

    return 0;
}

