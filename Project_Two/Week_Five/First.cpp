#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        int m, n;
        cin >> m >> n;
        int count = 0, tmp = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> tmp;
                if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
                {
                    count += tmp;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
