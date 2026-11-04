#include <iostream>
using namespace std;

int main()
{
    unsigned short height;
    unsigned short width;
    unsigned short Area;
    
    
    cout << "Enter height the square ? ";
    cin >> height;
    cout << "Enter Width The square ? ";
    cin >> width;

    Area = height * width;

    cout << "Your Area Of Square is " << Area;

    return 0;
}