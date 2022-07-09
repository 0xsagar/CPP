#include <iostream>
using namespace std;

bool prime(int n)
{
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if (prime(n) == 0)
    {
        cout << "Not Prime";
    }
    else
    {
        cout << "Prime";
    }
}