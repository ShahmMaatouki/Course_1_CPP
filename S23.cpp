#include <iostream>
using namespace std;

struct S_Marks
{
    int The_Mark;
};

void F_Mark_Read(S_Marks &Info)
{
    cout << "Enter Your Mark ? " << endl;
    cin >> Info.The_Mark;
}

void F_Counter_System(S_Marks Info)
{
        if (Info.The_Mark >= 50)
        {
            cout << "Pass" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
}

int main()
{
    S_Marks Data_1;

    F_Mark_Read(Data_1);
    F_Counter_System(Data_1);
}