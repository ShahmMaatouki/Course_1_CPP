#include <iostream>
using namespace std;

int main()
{
    unsigned short Number;
    unsigned short plus;
    
    cout << "Enter Your Number ? ";
    cin >> Number;
    plus = Number * Number;
    cout << plus << endl;
    plus = Number * Number * Number;
    cout << plus << endl;
    plus = Number * Number * Number * Number;
    cout << plus << endl;
    return 0;

}