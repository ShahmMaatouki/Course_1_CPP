#include <iostream>
#include <string>
using namespace std;

struct S_Month
{
    int Number_of_Month;
};

void F_Month_Read(S_Month &Info)
{
    cout << "Enter Your Number Of Month ? " << endl;
    cin >> Info.Number_of_Month;
}
void F_Month_System(S_Month Info)
{
    while (true)
    {
        if (Info.Number_of_Month == 1)
        {
            cout << "January" << endl;
            break;
        }
        else if (Info.Number_of_Month == 2)
        {
            cout << "February" << endl;
            break;
        }
        else if (Info.Number_of_Month == 3)
        {
            cout << "March" << endl;
            break;
        }
        else if (Info.Number_of_Month == 4)
        {
            cout << "April" << endl;
            break;
        }
        else if (Info.Number_of_Month == 5)
        {
            cout << "May" << endl;
            break;
        }
        else if (Info.Number_of_Month == 6)
        {
            cout << "June" << endl;
            break;
        }
        else if (Info.Number_of_Month == 7)
        {
            cout << "July" << endl;
            break;
        }
        else if (Info.Number_of_Month == 8)
        {
            cout << "August" << endl;
            break;
        }
        else if (Info.Number_of_Month == 9)
        {
            cout << "September" << endl;
            break;
        }
        else if (Info.Number_of_Month == 10)
        {
            cout << "October" << endl;
            break;
        }
        else if (Info.Number_of_Month == 11)
        {
            cout << "November" << endl;
            break;
        }
        else if (Info.Number_of_Month == 12)
        {
            cout << "December" << endl;
            break;
        }
        else
        {
            cout << "Wrong Month" << endl;
            cout << "Enter Your Number Of Month ? " << endl;
            cin >> Info.Number_of_Month;
        }
    }
    
    
}

int main()
{
    S_Month DATA_1;

    F_Month_Read(DATA_1);
    F_Month_System(DATA_1);
    
    return 0;
}