#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sorting
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    int diff = 0;
    for (int i = 0; i < n - 1; i++)
    {// diff = arr[1] - arr[0];
        if (arr[i + 1] - arr[i] > diff)
        {
            diff = arr[i + 1] - arr[i];
        }
    }
    cout << diff << " " << endl;
}