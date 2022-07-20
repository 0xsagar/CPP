#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int count, a = 0, b = 1, nextTerm;
    for (int i = 3; i <= n; i++)
    {
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return nextTerm;
}

int main()
{
    int n;
    cin >> n;
    if (n <= 1)
    {
        cout << "0" << endl;
    }
    else if (n == 2)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << fibonacci(n) << endl;
    }
}