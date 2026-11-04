#include <iostream>
using namespace std;

struct S_Pirson_Info
{
    string First_Name;
    string Last_Name;
    int Age;
    int Phone;
};

void F_Pirsons_Read(S_Pirson_Info &Data)
{
    cout << "Enter First Name ? " << endl;
    cin >> Data.First_Name;
    
    cout << "Enter Last Name ? " << endl;
    cin >> Data.Last_Name;
    
    cout << "Enter Age ? " << endl;
    cin >> Data.Age;
    
    cout << "Enter Phone Number ? " << endl;
    cin >> Data.Phone;
}


void F_Pirson_Print(S_Pirson_Info &Data)
{
    cout << "***************************************" << endl;
    cout << "Your First Name is : " << Data.First_Name << endl;
    cout << "Your Last Name is : " << Data.Last_Name << endl;
    cout << "Your Age is : " << Data.Age << endl;
    cout << "Your Phone Number is :" << Data.Phone << endl;
    cout << "***************************************" << endl;
}

void F_Pirson_All_Read(S_Pirson_Info Data[2])
{
    F_Pirsons_Read(Data[0]);
    F_Pirsons_Read(Data[1]);
    
}

void F_Pirson_All_Print(S_Pirson_Info Data[2])
{
    F_Pirson_Print(Data[0]);
    F_Pirson_Print(Data[1]);
}

int main()
{
    S_Pirson_Info Data[2];

    F_Pirson_All_Read(Data);
    F_Pirson_All_Print(Data);

    return 0;
}
