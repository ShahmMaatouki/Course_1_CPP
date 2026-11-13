#include <iostream>
using namespace std;

int main()
{
    int Arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int NUM = 20;

    for (int i = 0; i <= 10; i++)
    {
        cout << i << endl;
        cout << "\n" << endl;
        
        if (NUM == Arr[i])
        {
            cout << i << endl;
            cout << "\n" << endl;
            break;
        }
        
    }
    
    return 0;
}