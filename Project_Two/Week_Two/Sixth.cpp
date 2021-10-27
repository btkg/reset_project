#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    char a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int m;
    cin >> m;
    while (m--)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == '!')
                    a[i][j] = '@'; // 将前一天标记的人感染
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == '@')
                {
                    if (i - 1 >= 0 && a[i - 1][j] == '.')
                    {
                        a[i - 1][j] = '!';
                    }
                    if (i + 1 < n && a[i + 1][j] == '.')
                    {
                        a[i + 1][j] = '!';
                    }
                    if (j - 1 >= 0 && a[i][j - 1] == '.')
                    {
                        a[i][j - 1] = '!';
                    }
                    if (j + 1 < n && a[i][j + 1] == '.')
                    {
                        a[i][j + 1] = '!';
                    }
                }
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == '@')
            {
                count++;
            }
        }
        cout << count << endl;
    }
    cout << count << endl;
    return 0;
}