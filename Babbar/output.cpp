#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int i, j, count = 0;
    j = str.size() - 1;
    for (int i = 0; i < j; i++)
    {
        if (str[i] == str[j])
        {
            count = count + 2;
        }
        j--;
    }
    cout << count;
}