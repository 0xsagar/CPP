#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    // int mid = (start + end) / 2;
    // but what if start and end are extremely big values which are out of the range of 'int' 
    // therefore using this will solve that kind of error
    int mid = (start + (end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        // go to right wala part
        if (arr[mid] < k)
        {
            start = mid + 1;
        }
        // go to left wala part
        else
        {
            end = mid - 1;
        }
        // mid = (start + end) / 2;
        mid = (start + (end - start) / 2);
    }
    return -1;
}

int main()
{
    int even[6] = {2, 7, -1, 5, -9, 12};
    int odd[5] = {1, 18, -5, 6, 22};
    cout << binarySearch(even, 6, 5) << endl;
    cout << binarySearch(odd, 5, 22) << endl;
    return 0;
}