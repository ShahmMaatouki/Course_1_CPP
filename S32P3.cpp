#include <iostream>
using namespace std;


struct S_Number_Input
{
    int NUM;
    int Total;

};

void F_Number_System(S_Number_Input &Info)
{
    cout << "Enter Your Number ? " << endl;
    cin >> Info.NUM;
    
    for (int DATA_of_Number = 1; DATA_of_Number <= Info.NUM; DATA_of_Number = DATA_of_Number + 2)
    {
        Info.Total = Info.Total + DATA_of_Number;
        cout << DATA_of_Number << endl;
    }
}

int main()
{
    S_Number_Input DATA_1;
    

    F_Number_System(DATA_1);
    cout << DATA_1.Total << endl;

    return 0;
}