#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char a[100];
    cin >> a;
    int b, c, d;
    int count = 0, tmp = 0, flag = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (isdigit(a[i]))
        {
            tmp = tmp * 10 + (a[i] - '0');
        }
        if (a[i + 1] == ',')
        {
            count++;
        }
        if (count == 1 && flag == 0)
        {
            b = tmp;
            tmp = 0;
            flag = 1;
        }
        if (count == 2 && flag == 1)
        {
            c = tmp;
            tmp = 0;
            flag = 2;
        }
        if (a[i + 1] == '\0')
        {
            d = tmp;
        }
    }
    if (b + c == d)
    {
        cout << "+" << endl;
    }
    else if (b - c == d)
    {
        cout << "-" << endl;
    }
    else if (b * c == d)
    {
        cout << "*" << endl;
    }
    else if (b / c == d)
    {
        cout << "/" << endl;
    }
    else if (b % c == d)
    {
        cout << "%" << endl;
    }
    else
    {
        cout << "error" << endl;
    }

    return 0;
}
