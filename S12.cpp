#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N1 = 20;
    double N2 = 33.5;
    float N3 = 55.23;

    string ST1, ST2, ST3;

    ST1 = to_string(N1);
    ST2 = to_string(N2);
    ST3 = to_string(N3);
    int INT_NUM1 = (int)N3;
    int INT_NUM2 = int(N3); 
    int INT_NUM3 = N3;

    cout << ST1 << " | " << ST2 << " | " << ST3 << endl;
    cout << INT_NUM1 << " | " << INT_NUM2 << " | " << INT_NUM3;

 //-------------------------------------------------------------------//
    
    string STB1 = "67.67";
    
    int int_ST1 = stoi(STB1);
    float float_ST1 = stof(STB1);
    double double_ST1 = stod(STB1);

    cout << int_ST1 << " " << float_ST1 << " " << double_ST1;

    return 0;
}