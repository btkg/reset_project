#include <iostream>
using namespace std;
int s[5][5];

int canPaint(int *s, int n)
{
    int count = 0;
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (*(s + i * n + j) == 1 &&
                *(s + i * n + j + 1) == 1 &&
                *(s + i * n + j - 1) == 1 &&
                *(s + (i - 1) * n + j) == 1 &&
                *(s + (i + 1) * n + j) == 1)
            {
                count++;
                (*(s + i * n + j)) = 0;
                (*(s + i * n + j + 1)) = 0;
                (*(s + i * n + j - 1)) = 0;
                (*(s + (i - 1) * n + j)) = 0;
                (*(s + (i + 1) * n + j)) = 0;
            }
        }
    }
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (*(s + i * n + j) == 1)
            {
                count = -1;
                break;
            }
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        int x = a + 2;
        char tmp;
        for (int i = 0; i < x; i++)
        {
            s[i][0] = 1;
            s[0][i] = 1;
            s[i][x - 1] = 1;
            s[x - 1][i] = 1;
        }
        for (int i = 1; i < x - 1; i++)
        {
            for (int j = 1; j < x - 1; j++)
            {
                cin >> tmp;
                // yellow -> 0, white -> 1
                if (tmp == 'y')
                {
                    s[i][j] = 0;
                }
                else
                {
                    s[i][j] = 1;
                }
            }
        }
        int result = canPaint(*s, x);
        if (result == -1)
        {
            cout << "Impossible" << endl;
        }
        else
        {
            cout << result << endl;
        }
    }
    return 0;
}
