#include <iostream>
using namespace std;

int main()
{
    unsigned int Number_1;
    unsigned int Number_2;
    unsigned int Number_3;
    unsigned int The_Average;
    unsigned int Total_Numbers;

    cout << "Enter Your First Number ? " << endl;
    cin >> Number_1;
    cout << "Enter Your Second Number ? " << endl;
    cin >> Number_2;    
    cout << "Enter Your Third Number ? " << endl;
    cin >> Number_3;

    Total_Numbers = Number_1 + Number_2 + Number_3;
    
    The_Average = Total_Numbers / 3;

    cout << "The Average Of Numbers is " << The_Average;

    return 0;
}