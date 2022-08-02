#include <bits/stdc++.h>
using namespace std;

// // Approach 1 = Count and print
// int main()
// {
//     int arr[8] = {1, 2, 0, 1, 2, 2, 0, 1};
//     int zero = 0, one = 0, two = 0;
//     for (int i = 0; i < 8; i++)
//     {
//         if (arr[i] == 0)
//         {
//             zero++;// Approach 1 = Count and print
// int main()
// {
//     int arr[8] = {1, 2, 0, 1, 2, 2, 0, 1};
//     int zero = 0, one = 0, two = 0;
//     for (int i = 0; i < 8; i++)
//     {
//         if (arr[i] == 0)
//         {
//             zero++;
//         }
//         if (arr[i] == 1)
//         {
//             one++;
//         }
//         if (arr[i] == 2)
//         {
//             two++;
//         }
//     }
//     while (zero > 0)
//     {
//         cout << "0 ";
//         zero--;
//     }
//     while (one > 0)
//     {
//         cout << "1 ";
//         one--;
//     }
//     while (two > 0)
//     {
//         cout << "2 ";
//         two--;
//     }
// }
//         if (arr[i] == 1)
//         {
//             one++;
//         }
//         if (arr[i] == 2)
//         {
//             two++;
//         }
//     }
//     while (zero > 0)
//     {
//         cout << "0 ";
//         zero--;
//     }
//     while (one > 0)
//     {
//         cout << "1 ";
//         one--;
//     }
//     while (two > 0)
//     {
//         cout << "2 ";
//         two--;
//     }
// }

// // Approach 2 = sort function
// int main()
// {
//     vector<int> arr = {1, 2, 0, 1, 2, 2, 0, 1};
//     cout << "Before: ";
//     for (int i = 0; i < 8; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     sort(arr.begin(), arr.end());
//     cout << "After: ";
//     for (int i = 0; i < 8; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }