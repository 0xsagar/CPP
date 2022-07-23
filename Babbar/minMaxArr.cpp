#include <bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int getMax(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    int arr[10000];
    // NOTE: NEVER USE variable as the size of your array (GHATIA PRACTICE)
    // Always use the given cinstraints or a larger number

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Min element: " << getMin(arr, n) << endl;
    cout << "Max element: " << getMax(arr, n) << endl;
}