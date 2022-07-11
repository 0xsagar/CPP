int main()
{
    int a;
    char b = 64;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(b + j);
        }
        b++;
        cout << endl;
    }
}