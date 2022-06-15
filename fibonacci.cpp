#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int a = 0, b = 1, nextTerm;
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    fibonacci(n);
    return 0;
}