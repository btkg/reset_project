#include <iostream>
using namespace std;
int main()
{
    int m, k;
    cin >> m >> k;
    int count = 0;
    if (m % 19 == 0)
    {
        while (true)
        {
            if (m % 10 == 3)
            {
                count++;
            }
            m = m / 10;
            if (m == 0)
            {
                break;
            }
        }
        if (count == 3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
