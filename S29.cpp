#include <iostream>
using namespace std;

enum en_Days {Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7};

int main()
{
    int Days, Input_Days;

    en_Days Days_Number;

    cout << "(1) To Sunday" << endl;
    cout << "(2) To Monday" << endl;        
    cout << "(3) To Tuesday" << endl;
    cout << "(4) To Wednesday" << endl;
    cout << "(5) To Thursday" << endl;
    cout << "(6) To Friday" << endl;
    cout << "(7) To Saturday" << endl;

    cout << "Enter Number ? " << endl;
    cin >> Days;
    Days_Number = (en_Days)Days;

    switch (Days_Number)
    {
    case en_Days::Sunday:
        cout << "Its Sunday" << endl;
        break;
    case en_Days::Monday:
        cout << "Its Monday" << endl;
        break;
    case en_Days::Tuesday:
        cout << "Its Tuesday" << endl;
        break;
    case en_Days::Wednesday:
        cout << "Its Wednesday" << endl;
        break;
    case en_Days::Thursday:
        cout << "Its Thursday" << endl;
        break;
    case en_Days::Friday:
        cout << "Its Friday" << endl;
        break;
    case en_Days::Saturday:
        cout << "Its Saturday" << endl;
        break;
    
    default:
        break;
    }


    return 0; 
}