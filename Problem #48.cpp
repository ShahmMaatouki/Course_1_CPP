#include <iostream>
using namespace std;

int main()
{
    unsigned int LoanAmount, MonthyToFinish, Time;

    cout << "Enter Your Loan Amount ? ";
    cin >> LoanAmount;
    cout << "Enter Your Month You Need To Finish ? ";
    cin >> MonthyToFinish;

    Time = LoanAmount / MonthyToFinish;

    cout << "You Need To Finish All Amounts " << Time;


    return 0;
}