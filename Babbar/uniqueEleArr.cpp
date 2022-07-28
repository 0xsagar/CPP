#include <iostream>
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
    cout << "Unique elements in our Array: ";
    int newArr[100];
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = i+1; j < n - 1; j++){
            
        }
    }
}