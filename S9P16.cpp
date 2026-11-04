#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float Area;
    int A, B;
    
    cout << "Enter A ?";
    cin >> A;
    cout << "Enter B ?";
    cin >> B;

    Area = A * sqrt(pow(B, 2) - pow(A, 2));

    cout << Area;
    

    return 0;
}

