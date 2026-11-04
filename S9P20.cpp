#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float Area;
    float PI;
    int A;
    
    PI = 3.14;

    cout << "Enter your (A) ? ";
    cin >> A;

    Area = PI * pow(A/2, 2) ;

    cout << ceil(Area);

    return 0;
}

