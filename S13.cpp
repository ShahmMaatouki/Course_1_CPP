#include <iostream>
#include <string>
using namespace std;

int main()
{

    string string_1, string_2, string_3;
    
    cout << "Please Enter String_1 ? ";
    getline(cin, string_1);
    
    cout << "Please Enter String_2 ? ";
    cin >> string_2;
    
    cout << "Please Enter String_3 ? ";
    cin >> string_3;
    
    int int_Num = stoi(string_2) * stoi(string_3);
    
    cout << "*************************************" << endl;
    cout << "The Legth of String_1 is " << string_1.length() << endl;
    cout << "Characters at 0,2,4,7 are : " << string_1[0] << " " << string_1[2] << " " << string_1[4] << " " << string_1[7] << endl;
    cout << "Concatenating String_2 and String_3 = " <<string_2 + string_3 << endl;
    cout << "5 * 10 = " << int_Num << endl;
    
    
    return 0;
}

