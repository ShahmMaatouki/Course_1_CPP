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

    for (int DATA_Input = 1; DATA_Input <= Info.NUM; DATA_Input = DATA_Input++)
    {
        cout << system("color 2A") << DATA_Input << DATA_Input << DATA_Input << DATA_Input << DATA_Input << DATA_Input << DATA_Input << DATA_Input << DATA_Input << endl;
    }
}

int main()
{
    S_Number_Input DATA_1;

    F_Number_System(DATA_1);

    return 0;
}