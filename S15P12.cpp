#include <iostream>
using namespace std;

int F_Power_of_M()
{
    int Number, M;

    cout << "Enter Number ? ";
    cin >> Number;
    cout << "Enter M ? ";
    cin >> M;

    cout << pow(Number, M) << endl;

    return Number;
}

int main()
{
    F_Power_of_M();
    return 0;
}