#include <iostream>
using namespace std;

enum en_Month {January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12};

int main()
{
    int Month, Input_Month;

    en_Month Month_Number;

    cout << "(1) To January" 
         << "\n" 
            "(2) To February"
         << "\n"
            "(3) To March"
         << "\n"
            "(4) To April"
         << "\n"
            "(5) To May"
         << "\n"
            "(6) To June"
         << "\n"
            "(7) To July"
         << "\n"
            "(8) To August"
         << "\n"
            "(9) To September"
         << "\n"
            "(10) To October"
         << "\n"
            "(11) To November"
         << "\n"
            "(12) To December"
         << "\n"
            "Enter Number ? "
         << "\n";

    cin >> Month;
    Month_Number = (en_Month)Month;

    switch (Month_Number)
    {
    case en_Month::January:
        cout << "Its January" << endl;
        break;
    case en_Month::February:
        cout << "Its February" << endl;
        break;
    case en_Month::March:
        cout << "Its March" << endl;
        break;
    case en_Month::April:
        cout << "Its April" << endl;
        break;
    case en_Month::May:
        cout << "Its May" << endl;
        break;
    case en_Month::June:
        cout << "Its June" << endl;
        break;
    case en_Month::July:
        cout << "Its July" << endl;
        break;
    case en_Month::August:
        cout << "Its August" << endl;
        break;
    case en_Month::September:
        cout << "Its September" << endl;
        break;
    case en_Month::October:
        cout << "Its October" << endl;
        break;
    case en_Month::November:
        cout << "Its November" << endl;
        break;
    case en_Month::December:
        cout << "Its December" << endl;
        break;
    
    default:
        break;
    }


    return 0; 
}