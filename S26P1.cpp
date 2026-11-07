#include <iostream>
using namespace std;

struct S_Grades
{
    int The_Grade;
};

void F_Grade_Read(S_Grades &Info)
{
    cout << "Enter Your Grade ? " << endl;
    cin >> Info.The_Grade;
}

void F_Grade_System(S_Grades Info)
{
    if (Info.The_Grade > 100)
    {
        cout << "Over 100!!" << endl;
    }
    else if (Info.The_Grade >= 90 && Info.The_Grade <= 100)
    {
        cout << "A" << endl;
    }
    else if (Info.The_Grade >= 80 && Info.The_Grade <= 89)
    {
        cout << "B" << endl;
    }
    else if (Info.The_Grade >= 70 && Info.The_Grade <= 79)
    {
        cout << "C" << endl;
    }
    else if (Info.The_Grade >= 60 && Info.The_Grade <= 69)
    {
        cout << "D" << endl;
    }
    else if (Info.The_Grade >= 50 && Info.The_Grade <= 59)
    {
        cout << "E" << endl;
    }
    else
    {
        cout << "F" << endl;
    }
    
    
}

int main()
{
    S_Grades DATA_1;

    F_Grade_Read(DATA_1);
    F_Grade_System(DATA_1);

    return 0;
}