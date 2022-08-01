#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

// // Approach 1 = Count the number of zeroes and number one one's, print them
// int main()
// {
//     int arr[6] = {0, 1, 0, 1, 1, 0};
//     int zero = 0, one = 0;
//     for (int i = 0; i < 6; i++)
//     {
//         if (arr[i] == 0)
//         {
//             zero++;
//         }
//         if (arr[i] == 1)
//         {
//             one++;
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
//     return 0;
// }

// // Approach 2 = use sort function
// int main()
// {
//     vector<int> arr = {0, 1, 0, 1, 1, 0};
//     cout << "Before: ";
//     for (int i = 0; i < 6; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     sort(arr.begin(), arr.end());
//     cout << "After: ";
//     for (int i = 0; i < 6; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// // //Best one
// // //Approach 3 = i, j, Swap...Single Traversal
// int main()
// {
//     int arr[6] = {0, 1, 0, 1, 1, 0};
//     int i = 0, j = 5;
//     while (i < j)
//     {
//         if (arr[i] == 0)
//         {
//             i++;
//         }
//         if (arr[j] == 1)
//         {
//             j--;
//         }
//         if (arr[i] == 1 && arr[j] == 0)
//         {
//             int temp = arr[j];
//             arr[j] = arr[i];
//             arr[i] = temp;
//         }
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }