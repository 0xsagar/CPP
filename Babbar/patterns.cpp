#include <iostream>
using namespace std;
// int main()
// {
//     int a;
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= a; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// 1234
// 1234
// 1234
// 1234

// int main()
// {
//     int a;
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = a; j >= 1; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// 4321
// 4321
// 4321
// 4321

// int main()
// {
//     int a, count = 1;
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= a; j++)
//         {
//             cout << count;
//             count++;
//         }
//         cout << endl;
//     }
// }

// 123
// 456
// 789

// int main()
// {
//     int a;
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// *
// **
// ***

// int main()
// {
//     int a;
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }
// }

// 1
// 22
// 333
// 4444

// int main()
// {
//     int a, count = 1;
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << count;
//             count++;
//         }
//         cout << endl;
//     }
// }

// 1
// 23
// 456
// 78910

// int main()
// {
//     int a;
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << i + j;
//         }
//         cout << endl;
//     }
// }

// 1
// 23
// 345
// 4567
// 56789

// int main()
// {
//     int a;
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = i; j >= 1; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// 1
// 21
// 321
// 4321

// int main()
// {
//     int a;
//     char b = 64;
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= a; j++)
//         {
//             cout << char(b + i);
//         }
//         cout << endl;
//     }
// }

// AAAA
// BBBB
// CCCC
// DDDD

// int main()
// {
//     int a;
//     char b = 64;
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= a; j++)
//         {
//             cout << char(b + j);
//         }
//         cout << endl;
//     }
// }

// ABC
// ABC
// ABC

// int main()
// {
//     int a;
//     char b = 64;
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= a; j++)
//         {
//             cout << char(b + 1);
//             b++;
//         }
//         cout << endl;
//     }
// }

// ABC
// DEF
// GHI

// int main()
// {
//     int a;
//     char b = 64;
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= a; j++)
//         {
//             cout << char(b + j);
//         }
//         b++;
//         cout << endl;
//     }
// }

// ABCD
// BCDE
// CDEF
// DEFG

// int main()
// {
//     int a;
//     char b = 64;
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << char(b + i);
//         }
//         cout << endl;
//     }
// }

// A
// BB
// CCC
// DDDD

// int main()
// {
//     int a;
//     char b = 65;
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << char(b);
//             b++;
//         }
//         cout << endl;
//     }
// }

// A
// BC
// DEF
// GHIJ

// int main()
// {
//     int a;
//     char b = 64;
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << char(b + j);
//         }
//         b++;
//         cout << endl;
//     }
// }

// A
// BC
// CDE
// DEFG

int main()
{
    int a;
    cin >> a;
    char b = 65;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(b - j + 1);
        }
        cout << endl;
    }
}