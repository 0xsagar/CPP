#include <iostream>
using namespace std;
int main()
{
    int amount, left;
    cin >> amount;
    int arr[10] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        if (amount >= arr[i])
        {
            count[i] = amount / arr[i];
            amount = amount % arr[i];
        }
    }
    cout << "Currency Notes: " << endl;
    for (int i = 0; i < 10; i++)
    {
        if (count != 0)
        {
            cout << arr[i] << " : " << count[i] << endl;
        }
    }
}