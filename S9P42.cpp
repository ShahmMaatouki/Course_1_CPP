#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned short Days;
    unsigned short Hour;
    unsigned short Minutes;
    unsigned short Secondes;
    float Total;

    cout << "Enter Your Days ? ";
    cin >> Days;
    cout << "Enter Your Hours ? ";
    cin >> Hour;
    cout << "Enter Your Minutes ? ";
    cin >> Minutes;
    cout << "Enter Your Seconds ? ";
    cin >> Secondes;
    
    Total = round((Days * 24 * pow(60, 2)) + (Hour * pow(60, 2)) + (Minutes * 60) + (Secondes));

    cout << Total;

    return 0;
}

