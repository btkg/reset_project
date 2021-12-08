#include <iostream>
#include <memory>
using namespace std;
int main()
{
    int n, k;
    int a[9][9];
    memset(a, 0, sizeof(a));
    while (cin >> n >> k)
    {
        if (n == -1 && k == -1)
            return 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char tmp;
                cin >> tmp;
                if (tmp == '#')
                    a[i][j] = 1;
            }
        }
    }
}
