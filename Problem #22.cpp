#include <iostream>
using namespace std;

int main()
{
    float PI;
    float Area;
    unsigned short A;
    unsigned short B;

    PI = 3.14;

    cout << "Enter Your height Circle of Area ? ";
    cin >> A;
    cout << "Enter Your Width Circle of Area ? ";
    cin >> B;

    Area = (PI * (B * B) / 4 * (2 * A - B)/(2 * A + B));

    cout << "Your Circle Area is " << Area;
    
    return 0; 
}