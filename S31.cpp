#include <iostream>
#include <iostream>
using namespace std;

enum EN_WeekDays {Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7};

void F_Pint_Menu()
{
    cout << "(1) To Sunday" << endl;
    cout << "(2) To Monday" << endl;  
    cout << "(3) To Tuesday" << endl;
    cout << "(4) To Wednesday" << endl;
    cout << "(5) To Thursday" << endl;
    cout << "(6) To Friday" << endl;
    cout << "(7) To Saturday" << endl;
}

EN_WeekDays EN_Week_Days_Input()
{
    int DAY;
    EN_WeekDays WeekDays;

    cout << "Enter the Number of Day ? " << endl;

    cin >> DAY;
    WeekDays = (EN_WeekDays)DAY;
    
    return (EN_WeekDays)DAY;
}

string F_Week_Days_System(EN_WeekDays Info)
{
    switch (Info)
    {
    case EN_WeekDays::Sunday:
        return "Sunday";
        break;
    case EN_WeekDays::Monday:
        return "Monday";
        break;
    case EN_WeekDays::Tuesday:
        return "Tuesday";
        break;
    case EN_WeekDays::Wednesday:
        return "Wednesday";
        break;
    case EN_WeekDays::Thursday:
        return "Thursday";
        break;
    case EN_WeekDays::Friday:
        return "Friday";
        break;
    case EN_WeekDays::Saturday:
        return "Saturday";
        break;
    
    default:
        return "outside Days of Week!!";
        break;
    }
}

int main()
{
    F_Pint_Menu();

    cout << "Its " << F_Week_Days_System(EN_Week_Days_Input()) << endl;

    return 0;
}