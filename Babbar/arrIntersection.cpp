#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements for both the arrays: ";
    cin >> n;
    int arr1[100];
    cout << "Enter array 1 elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int arr2[100];
    cout << "Enter array 2 elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    cout << "Array 1: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Array 2: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    cout << "Array Intersection: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }
}