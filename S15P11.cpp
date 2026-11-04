#include <iostream>
using namespace std;

int F_Power_of_Numbers()
{
    int Number;

    cout << "Enter Your Number ? ";
    cin >> Number;

    cout << pow(Number, 2) << "\n" << pow(Number, 3) << "\n" << pow(Number, 4) << endl; 

    return Number;
}

int main()
{
    F_Power_of_Numbers();
    return 0;
}

