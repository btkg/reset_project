#include <iostream>
using namespace std;
int kmax(int n, int m, int k, int a[])
{
    int count = 0, index = 0;
    for (int i = 0; i < n; i++)
    {
        if (m < a[i])
        {
            count++;
            index = i;
        }
    }
    if (count == k-1)
    {
        return index;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int re = kmax(n, a[i], k, a);
        if (re != -1)
        {
            cout << a[i] << endl;
            return 0;
        }
    }
}
