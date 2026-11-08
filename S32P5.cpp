#include <iostream>
using namespace std;

struct S_Multiplucation_Numbers
{
    int The_Number, Total_Multiplication;
    int Total;

};


void F_Multiplucation_Numbers(S_Multiplucation_Numbers &Info)
{
    cout << "Enter Yourr Number ? " << endl;
    cin >> Info.The_Number;
    Info.Total_Multiplication = 1;

    for (int DATA = 1; DATA <= Info.The_Number; DATA++)
    {
        Info.Total = DATA;
        Info.Total_Multiplication = Info.Total * Info.Total_Multiplication;
        cout << DATA << endl;
    }
}

int main()
{
    S_Multiplucation_Numbers DATA_1;

    F_Multiplucation_Numbers(DATA_1);

    cout << DATA_1.Total_Multiplication << endl;

    return 0;
}