#include <iostream>
using namespace std;

//void MySumProcedure()
//{
//    cout << "Please Enter Number1 ? " << endl;
//    cout << "10" << endl;
//    cout << "Please Enter Number2 ? " << endl;
//    cout << "20" << endl;s
//    cout << "***********************" << endl;
//    cout << "30" << endl;
//
//}

int MySumFuncion()
{

    int Num1, Num2;
    cout << "Please Enter Number1 ? " << endl;
    cin >> Num1;
    cout << "Please Enter Number2 ? " << endl;
    cin >> Num2;
    cout << "***********************" << endl;
    return Num1 + Num2;


}

int main()
{
    //MySumProcedure();

    cout << MySumFuncion();



    return 0;
}