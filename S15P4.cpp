#include <iostream>
using namespace std;

float F_Total_Area()
{
    float Area, A, D;
    
    cout << "Enter A ? ";
    cin >> A;
    cout << "Enter D ? ";
    cin >> D; 

    Area = A * sqrt( D * D - A * A);

    cout << Area;

    return Area;

}

int main()
{
    F_Total_Area();
    return 0;
}

