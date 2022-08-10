#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int discountAMT(int orderValue)
{
    int answer = 0;
    int a = orderValue;
    while (a > 0)
    {
        int lastDigit = a % 10;
        if (isPrime(lastDigit) == 1)
        {
            answer = answer + lastDigit;
        }
        a/=10;
    }

    return answer;
}

int main()
{
    int orderValue;
    cin >> orderValue;
    int result = discountAMT(orderValue);
    cout << result;
}