#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[5][5];
    int n, m;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> n >> m;
    if (n > 4 || n < 0 || m > 4 || m < 0)
    {
        cout << "error" << endl;
    }
    else
    {
        for (int i = 0; i < 5; i++)
        {
            int tmp;
            tmp = a[n][i];
            a[n][i] = a[m][i];
            a[m][i] = tmp;
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << setw(4) << a[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
