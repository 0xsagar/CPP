// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, column;
//     cin >> row >> column;
//     for (int i = 1; i <= column; i++)
//     {
//         for (int j = 1; j <= row; j++)
//         {
//             cout << " * ";
//         }
//         cout << " * \n";
//     }
// }

// //  *  *  *  *  *  *
// //  *  *  *  *  *  *
// //  *  *  *  *  *  *
// //  *  *  *  *  *  *
// //  *  *  *  *  *  *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, column;
//     cin >> row >> column;
//     for (int i = 1; i <= column; i++)
//     {
//         for (int j = 1; j <= row; j++)
//         {
//             if (j == 1 || j == row || i == 1 || i == column)
//             {
//                 cout << " * ";
//             }
//             else
//             {
//                 cout << "   ";
//             }
//         }
//         cout << endl;
//     }
// }

// //  *  *  *  *  *
// //  *           *
// //  *           *
// //  *           *
// //  *  *  *  *  *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int column;
//     cin >> column;
//     for (int i = column; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << " * ";
//         }
//         cout << endl;
//     }
// }

// //  *  *  *  *  *
// //  *  *  *  *
// //  *  *  *
// //  *  *
// //  *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int column;
//     cin >> column;
//     for (int i = 1; i <= column; i++)
//     {
//         for (int j = 1; j <= column; j++)
//         {
//             if (j <= column - i)
//             {
//                 cout << "   ";
//             }
//             else
//             {
//                 cout << " * ";
//             }
//         }
//         cout << endl;
//     }
// }

// //              *
// //           *  *
// //        *  *  *
// //     *  *  *  *
// //  *  *  *  *  *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int column;
//     cin >> column;
//     int count = 1;
//     for (int i = 1; i <= column; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << count << "  ";
//             count = count + 1;
//         }
//         cout << endl;
//     }
// }

// // 1
// // 2  3
// // 4  5  6
// // 7  8  9  10
// // 11  12  13  14  15

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         int space = 2 * n - 2 * i;
//         for (int j = 1; j <= space; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         int space = 2 * n - 2 * i;
//         for (int j = 1; j <= space; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// // *        *
// // **      **
// // ***    ***
// // ****  ****
// // **********
// // **********
// // ****  ****
// // ***    ***
// // **      **
// // *        *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n + 1 - i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// // 1 2 3 4 5
// // 1 2 3 4
// // 1 2 3
// // 1 2
// // 1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if ((i + j) % 2 == 0)
//             {
//                 cout << "1";
//             }
//             else
//             {
//                 cout << "0";
//             }
//         }
//         cout << endl;
//     }
// }

// // 1
// // 01
// // 101
// // 0101
// // 10101

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= n; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// //     *****
// //    *****
// //   *****
// //  *****
// // *****

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// //     1
// //    1 2
// //   1 2 3
// //  1 2 3 4
// // 1 2 3 4 5

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, k;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << "  ";
//         }
//         for (int j = i; j >= 1; j--)
//         {
//             cout << j << " ";
//         }
//         for (int j = 2; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// //         1
// //       2 1 2
// //     3 2 1 2 3
// //   4 3 2 1 2 3 4
// // 5 4 3 2 1 2 3 4 5

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// //     *
// //    ***
// //   *****
// //  *******
// // *********
// // *********
// //  *******
// //   *****
// //    ***
// //     *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= 3; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

// // 9
// //     *       *
// //   *   *   *   *
// // *       *       *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = n - i; j > 0; j--)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j <= i; j++)
//         {
//             if (i != 0 && j != i)
//             {
//                 cout << "*A";
//             }
//             else
//             {
//                 cout << "* ";
//             }
//         }
//         cout << endl;
//     }
// }

// //     *
// //    *A*
// //   *A*A*
// //  *A*A*A*
