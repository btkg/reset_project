#include <iostream>
using namespace std;

int main()
{
    int row = 0, col = 0;
    int a[100][100] = {0};
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }

    int posi = 0;

    for (int i = 0; i < col; i++)
    {
        posi = 0;
        while (posi < row && i - posi >= 0)
        {
            cout << a[posi][i - posi] << endl;
            posi = posi + 1;
        }
    }

    for (int i = 1; i < row; i++)
    {
        posi = 0;
        while (col - 1 - posi >= 0 && i + posi < row)
        {
            cout << a[i + posi][col - 1 - posi] << endl;
            posi = posi + 1;
        }
    }

    return 0;
}
