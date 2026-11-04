#include <iostream>
using namespace std;

enum enGender { Man = 1, Woman = 0};
enum enMarrid { Married = 1, Single = 0};
enum enColor { Red, Blue, Black,};

struct Person_Information
{
    string Name;
    short Age;
    string City;
    string Country;
    unsigned int Monthly_Salary;
    unsigned int Yearly_Salary;

    enGender Gender;
    enMarrid My_MaritalStatues;
    enColor FavoriteColor;    

    //string Gender;
    //string Married;
};


int main()
{
    Person_Information Person_1;

    Person_1.Name = "Shahm Maatouki";
    Person_1.Age = 22;
    Person_1.City = "Madina";
    Person_1.Country = "Saudi";
    Person_1.Monthly_Salary = 1000;
    Person_1.Yearly_Salary = 12000;
    Person_1.Gender = enGender::Man;
    Person_1.My_MaritalStatues = enMarrid::Married;
    Person_1.FavoriteColor = enColor::Black;

    cout << "Name : "                 << Person_1.Name <<
    "\n" << "Age : "                  << Person_1.Age <<
    "\n" << "City : "                 << Person_1.City <<
    "\n" << "Country : "              << Person_1.Country <<
    "\n" << "Monthly_Salary : "       << Person_1.Monthly_Salary << 
    "\n" << "Yearly_Salary : "        << Person_1.Yearly_Salary << 
    "\n" << "Gender : "               << Person_1.Gender << 
    "\n" << "Married : "              << Person_1.My_MaritalStatues << 
    "\n" << "The Favorit Color is : " << Person_1.FavoriteColor << endl;
    return 0;
}

