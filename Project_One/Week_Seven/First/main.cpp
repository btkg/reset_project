#include <iostream>
using namespace std;

int beginning(int x, int *array, int *flag)
{
    int re;
    for (int i = 1; i <= x; i++)
    {
        if (flag[i] == 1)
        {
            re = i;
            break;
        }
    }
    return re;
}

int main()
{
    for (;;)
    {
        int x = 300, y = 300;
        cin >> x >> y;
        while ((x == 0) && (y == 0))
            return 0;

        int array[x + 1], flag[x + 1];
        for (int i = 1; i <= x; i++)
        {
            array[i] = i;
            flag[i] = 1;
        }

        int begin = 1, count = 6, step = y - 1;
        while (count--)
        {
            while (step--)
            {
                if (flag[begin] == 1 && begin + 1 <= x)
                {
                    begin++;
                }
                else if (flag[begin] == 1 && begin + 1 > x)
                {
                    begin = beginning(x, array, flag);
                }
                else if (flag[begin] == -1 && begin + 1 <= x)
                {
                    begin++;
                    step++;
                }
                else if (flag[begin] == -1 && begin + 1 > x)
                {
                    step++;
                    begin = beginning(x, array, flag);
                }
            }
            step = y - 1;
        }

        for (int i = 1; i <= x; i++)
        {
            if (flag[i] == 1)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
