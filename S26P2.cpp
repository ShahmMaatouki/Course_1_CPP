#include <iostream>
using namespace std;

struct S_Total_Sales
{
    unsigned int Total_Sales;
};

void F_Total_Sales_Read(S_Total_Sales &Info)
{
    cout << "Enter Your Total Sales ? " << endl;
    cin >> Info.Total_Sales;
}

void F_Total_Sales_System(S_Total_Sales Info)
{
    if (Info.Total_Sales >= 1000000)
    {
        cout << "Precentage is 1%" << endl;
    }
    else if (Info.Total_Sales >= 500000 && Info.Total_Sales < 1000000)
    {
        cout << "Precentage is 2%" << endl;
    }
    else if (Info.Total_Sales >= 100000 && Info.Total_Sales < 500000)
    {
        cout << "Precentage is 3%" << endl;
    }
    else if (Info.Total_Sales >= 50000 && Info.Total_Sales < 100000)
    {
        cout << "Precentage is 5%" << endl;
    }
    else if (Info.Total_Sales < 50000)
    {
        cout << "Precentage is 0%" << endl;
    }
}

int main()
{
    S_Total_Sales DATA_1;

    F_Total_Sales_Read(DATA_1);
    F_Total_Sales_System(DATA_1);

    return 0;
}