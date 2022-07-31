#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[100];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Unique elements in our Array: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                arr[j] = arr[i] + INT_MIN;
                break;
            }
        }
    }
    return 0;
}