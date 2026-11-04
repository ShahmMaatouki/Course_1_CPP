#include <iostream>
#include <string>

using namespace std;

struct Info_person
{
    string Name;
    short Age;
    string City;
    string Country;
    short Monthly_Salary;
    short Yearly_Salary;
    string Gender;
    short Married;
};

void F_Read_of_Info(Info_person &Info_Read)
{
    cout << "Enter Your Name ? ";
    cin >> Info_Read.Name;
    cout << "Enter Your Age ? ";
    cin >> Info_Read.Age;
    cout << "Enter Your City ? ";
    cin >> Info_Read.City;
    cout << "Enter Your Country ? ";
    cin >> Info_Read.Country;
    cout << "Enter Your Monthly_Salary ? ";
    cin >> Info_Read.Monthly_Salary;
    cout << "Enter Your Yearly_Salary ? ";
    cin >> Info_Read.Yearly_Salary;
    cout << "Enter Your Gender ? ";
    cin >> Info_Read.Gender;
    cout << "Enter Your Married ? ";
    cin >> Info_Read.Married;
}

void F_Print_of_Info(Info_person info_Print)
{
    cout << "************************************" << endl;
    cout << "NAME: " << info_Print.Name << endl;
    cout << "AGE: " << info_Print.Age << endl;
    cout << "CITY: " << info_Print.City << endl;
    cout << "COUNTRY: " << info_Print.Country << endl;
    cout << "MONTHLY SALARY: " << info_Print.Monthly_Salary << endl;
    cout << "YEARLY SALARY: " << info_Print.Yearly_Salary << endl;
    cout << "Gender: " << info_Print.Gender << endl;
    cout << "Married: " << info_Print.Married << endl;
    cout << "************************************" << endl;
}

int main()
{
    Info_person Info_person_1;
    F_Read_of_Info(Info_person_1);
    F_Print_of_Info(Info_person_1);
    
    Info_person Info_person_2;
    F_Read_of_Info(Info_person_2);
    F_Print_of_Info(Info_person_2);

    return 0;
}