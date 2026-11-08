#include <iostream>
using namespace std;

struct S_Multiplucation_Numbers
{
    int The_Number, Power_of_Number, Total_Power;
    int Total;

};


void F_Multiplucation_Numbers(S_Multiplucation_Numbers &Info)
{
    cout << "Enetr Your Number ? " << endl;
    cin >> Info.The_Number;
    cout << "Enetr Power ? " << endl;
    cin >> Info.Power_of_Number;

    for (int DATA = 1; DATA <= Info.Power_of_Number; DATA++ && (Info.The_Number * Info.The_Number) * Info.Power_of_Number)
    {
    }
}

int main ()
{
    S_Multiplucation_Numbers DATA_1;
    
    F_Multiplucation_Numbers(DATA_1);
    cout << (DATA_1.The_Number * DATA_1.The_Number) * DATA_1.Power_of_Number << endl;

    return 0;
}