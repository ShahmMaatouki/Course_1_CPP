#include <iostream>
using namespace std;

struct S_Average
{
    int Average;
};

void F_Average_Read(S_Average &Info)
{
    int Mark_1, Mark_2, Mark_3;

    cout << "Enter Mark_1 ? " << endl;
    cin >> Mark_1;
    cout << "Enter Mark_2 ? " << endl;
    cin >> Mark_2;
    cout << "Enter Mark_3 ? " << endl;
    cin >> Mark_3;
    
    Info.Average = (Mark_1 + Mark_2 + Mark_3) / 3;
}
void F_Mark_System(S_Average Info)
{
    cout << "Your Mark is " << Info.Average << endl;
    
    if (Info.Average >= 50)
    {
        cout << "Pass";
    }
    else
    {
        cout << "Fail";
    }
    
}

int main()
{
    S_Average Data_1;

    F_Average_Read(Data_1);
    F_Mark_System(Data_1);
}