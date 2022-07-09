#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if (a >= 97 && a <= 122)
    {
        cout << "Lower Case";
    }
    else if (a >= 65 && a <= 90)
    {
        cout << "Upper Case";
    }
    else if (a >= 48 && a <= 57)
    {
        cout << "Number";
    }
    else
    {
        cout << "Invalid Input";
    }int
}