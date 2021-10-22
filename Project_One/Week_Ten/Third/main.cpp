#include <iostream>
using namespace std;
int main()
{
    char a[500];
    cin.getline(a, 500);
    int len = 0, max = 0, mx = 0;

    for (int i = 0; a[i] != '.'; i++)
    {
        if (a[i] == ' ')
        {
            len = 0;
            continue;
        }
        len++;
        if (max < len)
        {
            max = len;
            mx = i;
        }
    }
    for (int i = mx - max + 1; i <= mx; i++)
    {
        cout << a[i];
    }
    cout << endl;
    return 0;
}
