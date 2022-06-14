// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arm = 0;
//     int original = n;
//     while (n > 0)
//     {
//         int digit = n % 10;
//         arm = arm + (digit * digit * digit);
//         n = n / 10;
//     }
//     if (original == arm)
//     {
//         cout << "The number is an Armstrong number!\n"
//              << arm;
//     }
//     else
//     {
//         cout << "The number is not an Armstrong number!" << arm;
//     }
// }

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arm = 0;
    int original = n;
    while (n > 0)
    {
        int digit = n % 10;
        arm += pow(digit, 3);
        n = n / 10;
    }

    if (original == arm)
    {
        cout << "The number is an Armstrong number!\n"
             << arm;
    }
    else
    {
        cout << "The number is not an Armstrong number!" << arm;
    }
}