#include <iostream>
using namespace std;

void Grades_Read(int Grade_Data[2])
{
    cout << "Enter Grade_1 ? " << endl;
    cin >> Grade_Data[0];
    
    cout << "Enter Grade_2 ? " << endl;
    cin >> Grade_Data[1];
    
    cout << "Enter Grade_3 ? " << endl;
    cin >> Grade_Data[2];
}

void Grade_System_And_Print(int Grade_Data[2])
{
    int Avrage;
    Avrage = (Grade_Data[0] + Grade_Data[1] + Grade_Data[2]) / 3;

    cout << "Avrage is " << Avrage << endl;

}

int main()
{
    int Grade_Data[2];

    Grades_Read(Grade_Data);
    Grade_System_And_Print(Grade_Data);

    return 0; 
}