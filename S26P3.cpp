#include <iostream>
#include <string>
using namespace std;

struct S_Calculation
{
    int Num_1, Num_2;
    string Operation_Type;
};

void F_Calculation_Red(S_Calculation &Info)
{
    cout << "Enter Number 1 ? " << endl;
    cin >> Info.Num_1;
    cout << "Enter Number 1 ? " << endl;
    cin >> Info.Num_2;
    cout << "Enter Opreation Type ? " << endl;
    cin >> Info.Operation_Type;
}

void F_Calculation_System(S_Calculation Info)
{
    if (Info.Operation_Type == "+")
    {
        cout << Info.Num_1 + Info.Num_2 << endl;
    }
    else if (Info.Operation_Type == "-")
    {
        cout << Info.Num_1 - Info.Num_2 << endl;
    }
    else if (Info.Operation_Type == "*")
    {
        cout << Info.Num_1 * Info.Num_2 << endl;
    }
    else if (Info.Operation_Type == "/")
    {
        cout << Info.Num_1 / Info.Num_2 << endl;
    }
    else
    {
        cout << "??!!" << endl;
    }    
}

int main()
{
    S_Calculation DTAT_1;

    F_Calculation_Red(DTAT_1);
    F_Calculation_System(DTAT_1);

    return 0;
}