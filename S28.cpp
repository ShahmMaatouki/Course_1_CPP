#include <iostream>
using namespace std;

enum en_Types {Plus = 1, Minus = 2, Multiplication = 3, Division = 4};

int main()
{
    int Type, Num_1, Num_2;

    en_Types en_numbers;
    cout << "(1) To Plus" << endl;
    cout << "(2) To Minus" << endl;
    cout << "(3) To Multiplcation" << endl;
    cout << "(4) To Division" << endl;
    cout << "Enter Your Type ? " << endl;
    cin >> Type;
    en_numbers = (en_Types)Type;

    cout << "Enter Your Number 1 ? " << endl;
    cin >> Num_1;    
    cout << "Enter Your Number 2 ? " << endl;
    cin >> Num_2;
    

    switch (en_numbers)
    {
    case en_Types::Plus:
        cout << "After Plus : " << Num_1 + Num_2 << endl;
        break;
    case en_Types::Minus:
        cout << "After Minus : " << Num_1 - Num_2 << endl;
        break;
    case en_Types::Multiplication:
        cout << "After Multiplication : " << Num_1 * Num_2 << endl;
        break;
    case en_Types::Division:
        cout << "After Division : " << Num_1 / Num_2 << endl;
        break;
    
    default:
        cout << "Wrong Type!!" << endl;
        break;
    }
}