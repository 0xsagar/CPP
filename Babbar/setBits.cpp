#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int Acount = 0, Bcount = 0, i = 0, sum;
    while (a != 0)
    {
        int bit = a & 1;
        if (bit == 1)
        {
            Acount++;
            a = a >> 1;
        }
        else
        {
            a = a >> 1;
        }
    }
    while (b != 0)
    {
        int bit = b & 1;
        if (bit == 1)
        {
            Bcount++;
            b = b >> 1;
        }
        else
        {
            b = b >> 1;
        }
    }
    sum = Acount + Bcount;
    cout << sum << endl;
}