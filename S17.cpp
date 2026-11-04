#include <iostream>
#include <string>
using namespace std;


void S_Swap(int &A, int &B)
{
    int Temp;

    Temp = A;
    A = B;
    B = Temp;

    cout << "In Swaep Is = " << endl
         << A << endl
         << B << endl;
}

int main()
{
    int A, B;

    cout << "Enter A ? ";
    cin >> A;
    cout << "Enter B ? ";
    cin >> B;
    
    S_Swap(A, B);
    
        cout << "In Main Is" << endl
             << A << endl
             << B << endl;
}