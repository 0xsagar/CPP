// #include <iostream>
// using namespace std;
// int main()
// {
//     string str;
//     cin >> str;
//     int i, j, count = 0;
//     j = str.size() - 1;
//     for (int i = 0; i < j; i++)
//     {
//         if (str[i] == str[j])
//         {
//             count = count + 2;
//         }
//         j--;
//     }
//     cout << count;
// }

// FLEXCAR coding question
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll maxSubArraySum(ll a[], ll size)
{
    ll max_so_far = INT_MIN, max_ending_here = 0;

    for (ll i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
        }

        if (max_ending_here < 0)
        {
            max_ending_here = 0;
        }
    }
    return max_so_far;
}

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        ll A[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        ll count = 0;
        for (ll i = 0; i < n; i++)
        {
            if (A[i] < 0)
            {
                count++;
            }
        }
        if (count == n) // Handling case when all the shops arevthe one where coins are deposited
        {
            cout << 0 << "\n";
        }
        else // Shops of the contiguous of both types
        {
            ll maxsum = maxSubArraySum(A, n);
            cout << maxsum << "\n";
        }
    }
    return 0;
}