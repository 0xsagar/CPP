#include <iostream>
using namespace std;
int main()
{
    int n, a, p = 1, s = 0;
    cout << "Enter the number: ";
    cin >> n;
    a = n;
    while (a != 0)
    {
        int digit = a % 10;
        p *= digit;
        s += digit;
        a /= 10;
    }
    int diff = p - s;
    cout << diff;
}