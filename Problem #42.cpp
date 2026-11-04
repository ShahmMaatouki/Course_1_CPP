#include <iostream>
using namespace std;

int main()
{
    unsigned short Days;
    unsigned short Hour;
    unsigned short Minute;
    unsigned short Seconde;
    unsigned int Total;
    
    cout << "Enter Days ? ";
    cin >> Days;
    cout << "Enter Hour ? ";
    cin >> Hour;
    cout << "Enter Minute ? ";
    cin >> Minute;
    cout << "Enter Seconde ? ";
    cin >> Seconde;

    Total = ((Days * 24 * 60 * 60) + (Hour * 60 * 60) + (Minute * 60) + Seconde);

    cout << Total << endl;
    
    return 0;
}