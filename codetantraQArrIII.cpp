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
    for (int i = 0; i < ArrLen; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (Arr[i] == Arr[j])
            {
                break;
            }
            if (i == j)
            {
                result[k] = Arr[i];
                k++;
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << result[k] << " ";
    }
    return 0;
}

// INCOMLPLETE ----- Complete the question