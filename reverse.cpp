#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number using 1 to 9: ";
    cin >> n;
    int reverse;
    while (n > 0)
    {
        int lastdigit = n % 10;
        reverse = (reverse * 10) + lastdigit;
        n = n / 10;
    }

    cout << reverse;
}

// cannot deal with numbers having '0' in them