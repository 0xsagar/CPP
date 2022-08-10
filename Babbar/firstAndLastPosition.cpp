#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + (end - start) / 2);
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            end = mid - 1;
        }
        // go to right wala part
        if (arr[mid] < k)
        {
            start = mid + 1;
        }
        // go to left wala part
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        // mid = (start + end) / 2;
        mid = (start + (end - start) / 2);
    }
    return ans;
}
int lastOcc(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + (end - start) / 2);
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            start = mid + 1;
        }
        // go to right wala part
        if (arr[mid] < k)
        {
            start = mid + 1;
        }
        // go to left wala part
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        // mid = (start + end) / 2;
        mid = (start + (end - start) / 2);
    }
    return ans;
}

int main()
{
    int arr[6] = {0, 1, 2, 2, 2, 3};
    cout << "First occurance of 2 is at index " << firstOcc(arr, 6, 2) << endl;
    cout << "Last occurance of 2 is at index " << lastOcc(arr, 6, 2) << endl;
    return 0;
}