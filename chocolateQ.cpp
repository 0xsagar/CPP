#include <bits/stdc++.h>
using namespace std;

int total_chocolate(int amount)
{
    int i = 0, chocolate = 0;
    while (i < amount)
    {
        chocolate += 1;
        if (chocolate % 3 == 0)
        {
            chocolate += 1;
        }
        i++;
    }
    return chocolate;
}

int main()
{
    int amount;
    cin >> amount;
    cout << "1 chocolate = 1 rupee" << endl;
    cout << "3 wrapper = 1 chocolate" << endl;
    cout << "total_chocolate : " << total_chocolate(amount) << endl;
}