// #include <iostream>
// using namespace std;

// int fact(int n)
// {
//     int factorial = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         factorial *= i;
//     }
//     return factorial;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << fact(i) / (fact(i - j) * fact(j)) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// // 1
// // 1 1
// // 1 2 1
// // 1 3 3 1
// // 1 4 6 4 1

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = n - i; j > 1; j--)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j <= i; j++)
//         {
//             cout << fact(i) / (fact(i - j) * fact(j)) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1