#include <iostream>
using namespace std;
int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    for (int num = a; num <= b; num++)
    {
        int i;
        for (i = 2; i <= num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            count++;
            cout << num << " " << count << endl;
        }
    }
    return 0;
}
