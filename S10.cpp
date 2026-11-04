#include <iostream> 
using namespace std;



struct ST_PirsonAdress
{
    int Adress;
    int Phone_Number;
};
struct Information
{
    string Name;
    int Age;
    string City;
    string Contry;
    int Monthly_Salary;
    int Yearly_Salary;
    string Ginder;
    int Married;

    ST_PirsonAdress Pirson_information;
};

int main ()
{

    Information Pirson;

    Pirson.Name = "Shahm Maatouki";
    Pirson.Age = 23;
    Pirson.City = "Madina";
    Pirson.Contry = "Saudi";
    Pirson.Monthly_Salary = 2000;
    Pirson.Yearly_Salary = 50000;
    Pirson.Ginder = "M";
    Pirson.Married = 0;

    Pirson.Pirson_information.Adress = 12.190879833;
    Pirson.Pirson_information.Phone_Number = 056251;

    cout << Pirson.Name << " " << Pirson.Age << " " << Pirson.City << " " << Pirson.Contry << " " << Pirson.Ginder << " " << 
    Pirson.Married << " " << Pirson.Monthly_Salary << " " << Pirson.Yearly_Salary << Pirson.Pirson_information.Adress << " " 
    << Pirson.Pirson_information.Phone_Number << " " <<  endl;

    return 0;
}
