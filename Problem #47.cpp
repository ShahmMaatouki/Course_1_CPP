#include <iostream>
using namespace std;

int main()
{
    unsigned int LoanAmount, MonthlyPayment, Time;

    cout << "Enter Your Loan Amount ? ";
    cin >> LoanAmount;
    cout << "Enter Your Monthly Payment ? ";
    cin >> MonthlyPayment;

    Time = LoanAmount / MonthlyPayment;

    cout << "You Need To Finish All Amounts " << Time;


    return 0;
}