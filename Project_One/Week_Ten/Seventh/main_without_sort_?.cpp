#include <iostream>
using namespace std;

int find_mid(int n, int a[])
{
    int rt = 0;
    for (int i = 0; i < n; i++)
    {
        int big = 0, equal = 0, small = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] > a[j])
            {
                big++;
            }
            else if (a[i] == a[j])
            {
                equal++;
            }
            else
            {
                small++;
            }
        }
        if (n % 2 == 0)
        {
        }
        else
        {
            if (big + equal == small + equal)
            {
                rt = a[i];
                break;
            }
        }
    }
    return rt;
}

int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n % 2 == 0)
        {
            cout << (find_mid(n, a) + find_mid(n, a)) / 2 << endl;
        }
        else
        {
            cout << find_mid(n, a) << endl;
        }
    }
    return 0;
}
