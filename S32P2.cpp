#include <iostream>
using namespace std;


struct S_Number_Input
{
    int NUM;
};

void F_Number_System(S_Number_Input &Info)
{
    cout << "Enter Your Number ? " << endl;
    cin >> Info.NUM;

    for (int DATA_of_Number = 1; DATA_of_Number <= Info.NUM; Info.NUM--)
    {
        cout << Info.NUM << endl;
    }
}

int main()
{
    S_Number_Input DATA_1;

    F_Number_System(DATA_1);

    return 0;
}