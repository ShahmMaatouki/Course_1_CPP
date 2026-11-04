#include <iostream>
using namespace std;

int X = 30;

void S_X()
{
    int X = 40;

    cout << "S_X (X) = " << X << endl;
};

int main()
{
    int X = 50;

    cout << "Global (X) = " << ::X << endl;
    S_X();
    cout << "Main (X) = " << X << endl;
}