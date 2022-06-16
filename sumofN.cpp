// #include <iostream>
// using namespace std;

// int sum(int n)
// {
//     int a = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         a += i;
//     }
//     cout << a << endl;
//     return 1;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     sum(n);
// }

#include <iostream>
using namespace std;
int main()
{
    int n, sum;
    cin >> n;
    sum = (n * (n + 1)) / 2;
    cout << sum << endl;
}