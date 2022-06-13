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

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row;
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