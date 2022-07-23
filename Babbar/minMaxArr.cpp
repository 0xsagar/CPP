#include <bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // Mehtod 1 to get Minimum value
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }

        // Method 2 to get minimum value
        mini = min(mini, arr[i]);
    }
    return mini;
}
int getMax(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // Method 1 to get maximum value
        //  if (arr[i] > max)
        //  {
        //      max = arr[i];
        //  }

        // Method 2 to get the maximum value
        maxi = max(maxi, arr[i]);
    }
    return maxi;
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