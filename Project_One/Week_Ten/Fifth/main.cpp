#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int count = 0;
    for (int i = 1; i <= n - 2; i++)
    {
        for (int j = 1; j <= n - 2; j++)
        {
            if (abs(a[i][j] - a[i][j - 1]) >= 50 && abs(a[i][j] - a[i - 1][j]) >= 50 && abs(a[i][j] - a[i][j + 1]) >= 50 && abs(a[i][j] - a[i + 1][j]) >= 50)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
