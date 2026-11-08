#include <iostream>
using namespace std;

struct S_A_TO_Z
{
    char Cod_A;
    char Cod_Z;
};

void F_Char(S_A_TO_Z &Info)
{
    Info.Cod_A = 65;
    Info.Cod_Z = 90;

    for (int DATA = 65; DATA <= Info.Cod_Z; DATA++)
    {
        cout << (char)DATA << endl;
    }
}
int main()
{
    S_A_TO_Z DATA_1;

    F_Char(DATA_1);
}