#include <iostream>
using namespace std;

struct S_Age
{
    int Age;
};

void F_Age_Read(S_Age &Info)
{
    cout << "Enter Your Age ? " << endl;
    cin >> Info.Age;
}
void F_Age_System(S_Age Info)
{
    if (Info.Age >= 18 && Info.Age <= 45)
    {
        cout << "Valid Age" << endl;
    }
    else
    {
        cout << "Invalid Age" << endl;
    } 
}

int main()
{
    S_Age DATA_1;

    F_Age_Read(DATA_1);
    F_Age_System(DATA_1);
}