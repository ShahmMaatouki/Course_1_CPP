#include <iostream>
using namespace std;

int main()
{
    unsigned short Penny;
    unsigned short Nickel;
    unsigned short Dime;
    unsigned short Quarter;
    unsigned short Dollar;
    float Total_Dollar;
    float Total_Pennies;

    cout << "Enter How Many Penny ? ";
    cin >> Penny; 
    cout << "Enter How Many Nickel ? ";
    cin >> Nickel;
    cout << "Enter How Many Dime ? ";
    cin >> Dime;
    cout << "Enter How Many Quarter ? ";
    cin >> Quarter;
    cout << "Enter How Many Dollar ? ";
    cin >> Dollar;

    Total_Pennies = Penny * 1 + Nickel * 5 + Dime * 10 + Quarter * 25 + Dollar * 100;
    Total_Dollar = Total_Pennies / 100;

    cout << Total_Pennies << "\n" << Total_Dollar;

    return 0;
}