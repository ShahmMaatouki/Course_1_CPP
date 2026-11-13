#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int sum = 0;

    for (int i = 1; i <= 6 -1; i++)
    {
        cout << "Enter Number ? " << i << endl;
        cin >> num;
        
        if (num >= 50)
        {
            cout << "NOO!!" << endl;
            continue;
        }
        sum += num;
    }
    cout << "Sum is : " << sum << endl;
    

    return 0;
}