#include <iostream>
using namespace std;

int main()
{
    int Total_Seconde;
    int Days;
    int Hour;
    int Minute;
    int seconde;
    int NumberOfDays;
    int NumberOfHour;
    int NumberOfMinute;
    int Box;


    Days = 24 * 60 * 60;
    Hour =  60 * 60;
    Minute = 60;

    cout << "Enter Your Number ? ";
    cin >> Total_Seconde;

    NumberOfDays = (Total_Seconde / Days);
    Box = Total_Seconde % Days;
    NumberOfHour = (Box / Hour);
    Box = Box % Hour;
    NumberOfMinute = (Box / Minute);
    Box = Box % Minute;
    seconde = Box;
    
    cout << NumberOfDays << ":" << NumberOfHour << ":" << NumberOfMinute << ":" << seconde << endl;


    return 0;
}