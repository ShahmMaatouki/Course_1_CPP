#include <iostream>
#include <string>

using namespace std;

int AgeFuncion(int AgeAgent)
{
    return AgeAgent;
}

string HasDriveLicenseFuncion(string Have)
{
    return Have;
}

string HasRecommendatinFunction(string HasRecommendatin)
{
    return HasRecommendatin;
}

int main() 
{
    int AgeAgent;
    string Have;
    string HasRecommendatin;
    
    cin >> HasRecommendatin;

    while (true)
    {
        if (HasRecommendatinFunction(HasRecommendatin) == "True")
        {
            cout << "Rejected";
            break;
        }
        else
        {
            cin >> AgeAgent;
            cin >> Have;

            if (AgeFuncion(AgeAgent) >= 21 && HasDriveLicenseFuncion(Have) == "True")
            {
                cout << "Rejected";
                break;
            }
            else
            {
                cout << "Hired";
            }
        }    
    }

    return 0;
}