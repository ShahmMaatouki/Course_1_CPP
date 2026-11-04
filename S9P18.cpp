#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float Area;
    float PI;
    int r;

    PI = 3.14;

    cout << "Enter (r) ? ";
    cin >> r;

    Area = PI * pow(r, 2);

    cout << "Your (r) is " << ceil(Area);
    
    return 0; 
}

