#include <iostream>
using namespace std;

int main()
{
    int i, j, sum = 0, flag;
    for (i = 1; i <= 20; i++)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            sum = sum + i;
            cout << i << " " << sum << endl;
        }
    }
}