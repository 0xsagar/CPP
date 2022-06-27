#include <iostream>
using namespace std;

int main()
{
    int ArrLen, k = 0;
    cin >> ArrLen;
    int Arr[ArrLen];
    int result[ArrLen];
    for (int i = 0; i < ArrLen; i++)
    {
        cin >> Arr[i];
    }

    for (int i = 0; i < ArrLen - 1; i++)
    {
        for (int j = i + 1; j < ArrLen; j++)
        {
            if (Arr[j] < Arr[i])
            {
                int temp = Arr[j];
                Arr[j] = Arr[i];
                Arr[i] = temp;
            }
        }
    }

    int prev;
    for (int i = 0; i < ArrLen; i++)
    {
        if (Arr[i] != Arr[i + 1] && Arr[i] != prev)
        {
            result[k] = Arr[i];
            k++;
        }
        else
        {
            continue;
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << result[k] << " ";
    }
}