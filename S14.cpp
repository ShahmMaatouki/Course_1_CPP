#include <iostream>
using namespace std;

struct S_Person_Information
{
    string Name;
    short Age;
    string City;
    string Country; 
}; 

struct S_Stars
{
    string StarsGrope;
};

struct S_Love_Programming
{
    string I_Love_Programming_1;
    string I_Love_Programming_2;
    string I_Love_Programming_3;
    string I_Love_Programming_4;
    string I_Love_Programming_5;
};

struct S_ALL_Structs
{
    S_Person_Information S_Person_Information;
    S_Stars S_Stars;
    S_Love_Programming S_Love_Programming;
};



void F_card_Information()
{
    //S_Person_Information Person_DATA;

    S_ALL_Structs All;

    cout << "Enter Your Name ? ";
    cin >> All.S_Person_Information.Name;
    cout << "Enter Your Age ? ";
    cin >> All.S_Person_Information.Age;
    cout << "Enter Your City ? ";
    cin >> All.S_Person_Information.City;
    cout << "Enter Your Country ? ";
    cin >> All.S_Person_Information.Country;

    cout << "********************************" << endl;
    cout << "Your Name is : " << All.S_Person_Information.Name << endl;
    cout << "Your Age is : " << All.S_Person_Information.Age << endl;
    cout << "Your City is : " << All.S_Person_Information.City << endl;
    cout << "Your Counrty is : " << All.S_Person_Information.Country << endl;
    cout << "********************************" << endl;
}

void F_Stars()
{
    //S_Stars Stars_DATA;
    S_ALL_Structs All;

    All.S_Stars.StarsGrope = "********************";

    cout << "\n\n" << All.S_Stars.StarsGrope << "\n" << All.S_Stars.StarsGrope << "\n" << 
    All.S_Stars.StarsGrope << "\n" << All.S_Stars.StarsGrope << endl << endl;
}

void F_I_Love_Prigramming()
{
    //S_Love_Programming Love_Programming_DATA;
    
    S_ALL_Structs All;

    All.S_Love_Programming.I_Love_Programming_1 = " I Love Programing! ";
    All.S_Love_Programming.I_Love_Programming_2 = " I Pramise to be the best developer ever! ";
    All.S_Love_Programming.I_Love_Programming_3 = " I Know it will take some time to practing, but I will achieve my goal. ";
    All.S_Love_Programming.I_Love_Programming_4 = " Best Regards,";
    All.S_Love_Programming.I_Love_Programming_5 = " Shahm Maatouki. ";

    cout << All.S_Love_Programming.I_Love_Programming_1 << "\n" << All.S_Love_Programming.I_Love_Programming_2 << "\n" <<
    All.S_Love_Programming.I_Love_Programming_3 << "\n" << All.S_Love_Programming.I_Love_Programming_4 << "\n" <<
    All.S_Love_Programming.I_Love_Programming_5 << endl;
}

void F_H_Style()
{
    cout << "**     **";
    cout << "**     **";
    cout << "**     **";
    cout << "*********";
    cout << "*********";
    cout << "**     **";
    cout << "**     **"; 
    cout << "**     **"; 
}

int main()
{
    F_card_Information();
    F_Stars();
    F_I_Love_Prigramming();
    F_H_Style();

    return 0;    
};

