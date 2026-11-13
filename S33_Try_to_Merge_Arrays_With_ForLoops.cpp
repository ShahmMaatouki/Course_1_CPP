#include <iostream>
#include <string>
using namespace std;

struct S_Car
{
    string Car_Mod;
    string Car_Color;
    int Car_Price;
};

void F_Car_Read(S_Car &Info)
{
    cout << "Enter Car Mod ? " << endl;
    cin >> Info.Car_Mod;
    cout << "Enter Car Color ? " << endl;
    cin >> Info.Car_Color;
    cout << "Enter Car Price ? " << endl;
    cin >> Info.Car_Price;
}

void F_Car_Print(S_Car &Info)
{
    cout << "Your Car Mod is   : " << Info.Car_Mod << endl;
    cout << "Your Car Color is : " << Info.Car_Color << endl;
    cout << "Your Car Price is : " << Info.Car_Price << endl;

}

void F_Car_loop_Read(S_Car Cars[100], int &How_Many_Cars)
{
    cout << "How Many Cars ? " << endl;
    cin >> How_Many_Cars;
    for (int i = 0; i <= How_Many_Cars -1; i++)
    {
        cout << "Car Number " << i + 1 << endl;
        F_Car_Read(Cars[i]);
    }
    
}
void F_Car_Loop_Print(S_Car Cars[100], int How_Many_Cars)
{
    for (int i = 0; i <= How_Many_Cars -1; i++)
    {
        cout << i + 1 << endl;
        F_Car_Print(Cars[i]);
    }
   


}

int main()
{
    S_Car Cars[100];
   int How_Many_Cars = 1;

   F_Car_loop_Read(Cars, How_Many_Cars);
   F_Car_Loop_Print(Cars, How_Many_Cars);
}