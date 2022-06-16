#include <iostream>
using namespace std;

void fib(int n)
{
    int a = 0, b = 2, nextTerm, sum = 0, sumCount = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << a % 10 << endl;
        int k = a;
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        sum = sum + (k % 10);
        sumCount++;
    }
    cout << "Sum : " << sum << "  Sum Count : " << sumCount;
    return;
}
int main()
{
    int n;
    cin >> n;
    fib(n);
    return 0;
}