// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int n;
//     int max = INT_MIN;
//     int min = INT_MAX;
//     cin >> n;
//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (array[i] > max)
//         {
//             max = array[i];
//         }
//         if (array[i] < min)
//         {
//             min = array[i];
//         }
//     }
//     cout << "Max : " << max << " | Min : " << min << endl;
// }

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, array[i]);
        minNo = min(minNo, array[i]);
    }
    cout << "Max : " << maxNo << " | Min : " << minNo << endl;
}