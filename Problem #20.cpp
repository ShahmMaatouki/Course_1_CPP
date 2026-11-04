#include <iostream>
using namespace std;

int main()
{
    unsigned short A;
    float Area_square;
    float PI;

    PI = 3.14;

    cout << "Enter Size of square ? ";
    cin >> A;

    Area_square = (PI * (A * A) / 4);

    cout << "Your square Size is " << Area_square;

    return 0;
}