#include <iostream>
#include <string>
using namespace std;

struct S_Days
{
    int Number_of_Day;
};

void F_Days_Read(S_Days &Info)
{
    cout << "Enter Your Number Of Day ? " << endl;
    cin >> Info.Number_of_Day;
}
void F_Days_System(S_Days Info)
{
    while (true)
    {
        if (Info.Number_of_Day == 1)
        {
            cout << "Sunday" << endl;
            break;
        }
        else if (Info.Number_of_Day == 2)
        {
            cout << "Monday" << endl;
            break;
        }
        else if (Info.Number_of_Day == 3)
        {
            cout << "Tuesday" << endl;
            break;
        }
        else if (Info.Number_of_Day == 4)
        {
            cout << "Wednesday" << endl;
            break;
        }
        else if (Info.Number_of_Day == 5)
        {
            cout << "Thursday" << endl;
            break;
        }
        else if (Info.Number_of_Day == 6)
        {
            cout << "Friday" << endl;
            break;
        }
        else if (Info.Number_of_Day == 7)
        {
            cout << "Saturday" << endl;
            break;
        }
        else
        {
            cout << "Wrong Day" << endl;
            cout << "Enter Your Number Of Day ? " << endl;
            cin >> Info.Number_of_Day;
        }
    }
    
    
}

int main()
{
    S_Days DATA_1;

    F_Days_Read(DATA_1);
    F_Days_System(DATA_1);
    
    return 0;
}