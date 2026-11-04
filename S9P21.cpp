#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
    float Area;
    float PI;
    int l;

    PI = 3.14;

    cout << "Enter Your (L) ?";
    cin >> l;

    Area = pow(l, 2) / (4 * PI);

    cout << floor(Area);


    return 0;
}

