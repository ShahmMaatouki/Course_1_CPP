#include <iostream>
#include <string>
using namespace std;

struct S_Has_License
{
    int Age;
    string Driving_license;
};

void F_Has_License_Read(S_Has_License &Info_Read)
{
    cout << "Has License  (Yes/No) ? " << endl;
    cin >> Info_Read.Driving_license;
    cout << "Enter Your Age ? " << endl;
    cin >> Info_Read.Age;
}


void F_Has_License_System(S_Has_License Info_System)
{
    if (Info_System.Driving_license == "Yes" && Info_System.Age >= 21)
    {
        cout << "************************" << endl;
        cout << "Rejected" << endl;
    }
    else
    {
        cout << "************************" << endl;
        cout << "Hired" << endl;
        cout << "************************" << endl;
    }
}

int main()
{
    S_Has_License Data_1;

    F_Has_License_Read(Data_1);
    F_Has_License_System(Data_1);
}
