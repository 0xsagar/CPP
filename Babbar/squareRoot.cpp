#include <iostream>
using namespace std;
int main()
{
    int n, diff = 0;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        diff = n - 1;
        if (n - (i * i) < diff)
        {
            diff = n - (i * i);
            if (diff < 0)
            {
                cout << i - 1;
                break;
            }
        }
    }
    return 0;
}

// returns the int part of square root of n