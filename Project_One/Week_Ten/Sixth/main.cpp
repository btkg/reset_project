#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[m];
    for (int i = n - m; i < n; i++)
    {
        b[i - n + m] = a[i];
    }
    for (int i = n - m - 1; i >= 0; i--)
    {
        a[i + m] = a[i];
    }
    for (int i = 0; i < m; i++)
    {
        a[i] = b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
