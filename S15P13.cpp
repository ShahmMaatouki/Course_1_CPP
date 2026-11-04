#include <iostream>
using namespace std;

float F_Time()
{
    int Number_Of_Day, Number_Of_Hours, Number_Of_Minutes, Number_Of_Seconds;

    float Total_Seconds;

    cout << "Enter Day ? ";
    cin >> Number_Of_Day;
    cout << "Enter Hours ? ";
    cin >> Number_Of_Hours;
    cout << "Enter Minutes ? ";
    cin >> Number_Of_Minutes;
    cout << "Enter Second ? ";
    cin >> Number_Of_Seconds;
    
    Total_Seconds = (Number_Of_Day * 24 * 60 * 60) + (Number_Of_Hours * 60 * 60) + (Number_Of_Minutes * 60) + Number_Of_Seconds;

    cout << Total_Seconds << " Seconds" << endl;

    return Total_Seconds;
}

int main()
{
    F_Time();

    return 0;
}