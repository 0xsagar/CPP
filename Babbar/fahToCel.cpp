#include <iostream>
using namespace std;
int main()
{
    double fah, cel;
    cin >> fah;
    cel = ((fah - 32) * 5) / 9;
    cout << cel;
}