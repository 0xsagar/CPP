#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, j;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 1; j--)
        {
            cout << " ";
        }
        cout << pow(11, i) << " " << endl;
    }
}