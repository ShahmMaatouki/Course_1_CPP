#include <iostream>
using namespace std;

int main()
{
    unsigned short Number_H;
    unsigned short Number_A;
    unsigned short Area_Of_Triangle;

    cout << "Enter height of triangle ? ";
    cin >> Number_H;
    cout << "Enter Width of triangle ? ";
    cin >> Number_A;

    Area_Of_Triangle = Number_A /2;

    cout << "Your Area Of Triangle is " << Area_Of_Triangle * Number_H;

    return 0;
}