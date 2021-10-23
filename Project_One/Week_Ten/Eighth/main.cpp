#include <iostream>
using namespace std;
int main()
{
    int l, m;
    cin >> l >> m;
    int a[10005] = {0};
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        for (int i = x; i <= y; i++)
        {
            a[i] = 1;
        }
    }
    int count = 0;
    for (int i = 0; i <= l; i++)
    {
        if (a[i] == 0)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
