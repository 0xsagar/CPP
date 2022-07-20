#include <iostream>
using namespace std;

bool oddOrEven(int n)
{
    int a = n % 2;
    if (a == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    if (oddOrEven(n) == 1)
    {
        cout << "Even Number" << endl;
    }
    else
    {
        cout << "Odd Number" << endl;
    }
}