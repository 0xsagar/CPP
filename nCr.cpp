#include <iostream>
using namespace std;

int factorial(int a)
{
    int fact = 1;
    for (int i = 2; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n, r, diff;
    cin >> n >> r;
    diff = n - r;
    int nCr = factorial(n) / (factorial(diff) * factorial(r));
    cout << nCr << endl;
    return 0;
}