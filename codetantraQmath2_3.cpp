#include <bits/stdc++.h>
using namespace std;

int smallestNumber(int k, int d)
{
    int n = 9;
    string st = "9";
    k--;
    while (k > 0)
    {
        n--;
        st += to_string(n);
        if (n == 0)
        {
            n = 10;
        }
        k--;
    }
    long l = stol(st);
    cout << "number : " << l << endl;
    int ans = 0;
    while (!(l % d == 0))
    {
        l++;
        ans++;
    }
    return ans;
}

int main()
{
    int k, d;
    cin >> k >> d;
    cout << smallestNumber(k, d) << endl;
}