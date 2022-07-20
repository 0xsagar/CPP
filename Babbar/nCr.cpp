#include <iostream>
using namespace std;

int factorial(int n)
{
    int p = 1;
    for (int i = 2; i <= n; i++)
    {
        p *= i;
    }
    return p;
}

int main()
{
    int n, r, nCr;
    cout << "Input n and r: " << endl;
    cin >> n >> r;
    nCr = (factorial(n)) / (factorial(r) * factorial(n - r));
    cout << n << "C" << r << ": " << nCr << endl;
}