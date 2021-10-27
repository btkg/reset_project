#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int id[n], before[n], after[n];
    double rate[n], rate_backup[n];
    for (int i = 0; i < n; i++)
    {
        cin >> id[i] >> before[i] >> after[i];
        rate[i] = (double)after[i] / (double)before[i];
        rate_backup[i] = (double)after[i] / (double)before[i];
    }
    sort(rate, rate + n);
    double maxGap = 0, gap = 0;
    for (int i = 0; i < n - 1; i++)
    {
        gap = rate[i + 1] - rate[i];
        maxGap = (maxGap > gap) ? maxGap : gap;
    }

    int a = 0, b = 0;
    for (int i = 0; i < n - 1; i++)
    {
        while (rate[i + 1] - rate[i] == maxGap)
        {
            b = i + 1;
            a = n - b;
            break;
        }
    }

    cout << a << endl;
    for (int i = b; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (rate[i] == rate_backup[j])
            {
                cout << id[j] << endl;
            }
        }
    }
    cout << b << endl;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (rate[i] == rate_backup[j])
            {
                cout << id[j] << endl;
            }
        }
    }
    return 0;
}
