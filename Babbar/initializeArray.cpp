#include <iostream>
using namespace std;
int main()
{
    int arr[10000];
    for (int i = 0; i < 10000; i++)
    {
        arr[i] = -24;
    }
    cout << arr[1100];
}