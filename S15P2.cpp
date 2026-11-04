#include <iostream>
using namespace std;

int SwapNums()
{
    int num1, num2, swaper;

    cin >> num1;
    cin >> num2;

    swaper = num1;
    num1 = num2;
    num2 = swaper;
 
    cout << num1 << "\n" << num2;
    
    return num1, num2;
}

int main()
{
    SwapNums();

    return 0;
}

