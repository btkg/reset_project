#include <iostream>
#include <algorithm>
using namespace std;
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
        sort(a, a + n);
        if (n % 2 == 0)
        {
            cout << (a[n / 2 - 1] + a[n / 2]) / 2 << endl;
        }
        else
        {
            cout << a[n / 2] << endl;
        }
    }
    return 0;
}
