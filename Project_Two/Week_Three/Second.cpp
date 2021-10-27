#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int tmp = a;
    while (tmp != 1)
    {
        if (tmp % 2 == 0)
        {
            a = tmp;
            tmp = tmp / 2;
            cout << a << "/2=" << tmp << endl;
            if (a == 2)
            {
                cout << "End" << endl;
                return 0;
            }
        }
        else
        {
            a = tmp;
            tmp = a * 3 + 1;
            cout << a << "*3+1=" << tmp << endl;
        }
    }
    cout << "End" << endl;
    return 0;
}
