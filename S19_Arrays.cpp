#include <iostream>
using namespace std;

struct S_Grades
{
    float Grades[2];
};

void F_Grades_System(S_Grades &Info)
{
    cout << "Enter Grade_1 ? " << endl;
    cin >> Info.Grades[0];
    
    cout << "Enter Grade_2 ? " << endl;
    cin >> Info.Grades[1];
    
    cout << "Enter Grade_3 ? " << endl;
    cin >> Info.Grades[2];

    cout << "The Average of grades is " <<(Info.Grades[0] + Info.Grades[1] + Info.Grades[2]) / 3 << endl;
}

int main()
{
    S_Grades Data_1;
    F_Grades_System(Data_1);
    return 0;
}