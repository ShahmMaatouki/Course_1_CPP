#include <iostream>
using namespace std;

int main()
{
    for (char A = (char)65; A <= (char)70; A++)
    {
        for (char B = (char)65; B <= A; B++)
        {
            cout << B;
        }
        cout << "\n";
    }
    
    return 0;
}