#include <iostream>
using namespace std;

int main()
{
    char Goker = (char)90;

    for (char A = (char)65; A < Goker; A++)
    {
        for (char B = (char)65; B < Goker; B++)
        {
            cout << A << B << endl;
        }
        cout << "\n";
    }

    return 0;
}