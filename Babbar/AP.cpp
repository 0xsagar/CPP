#include <iostream>
using namespace std;

int AP(int a, int d, int n)
{
    int nth_term = (a) + ((n - 1) * d);
    return nth_term;
}

int main()
{
    int a, d, n;
    cin >> a >> d >> n;
    cout << AP(a, d, n);
}