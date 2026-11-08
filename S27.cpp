#include <iostream>
using namespace std;

enum EN_Colors_List {Yellow = 1, Green = 2, Blue = 3};

int main()
{
    int C;
    EN_Colors_List COLOR;

    cin >> C;
    COLOR = (EN_Colors_List)C;

    if (COLOR == EN_Colors_List::Yellow)
    {
        system("Color 06");
    }
    else if (COLOR == EN_Colors_List::Green)
    {
        system("color 02");
    }
    else if (COLOR == EN_Colors_List::Blue)
    {
        system("color 0D");
    }
    else
    {
        system("color 07");
    }
}