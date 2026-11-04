#include <iostream>
using namespace std;

int F_Area()
{
    int Area, A, B;

    cout << "Enter Area A ? ";
    cin >> A;
    cout << "Enter Area B ? ";
    cin >> B;

    Area = A * B;

    cout << Area;

    return Area;
}


int main()
{
    F_Area();

    return 0;
}
