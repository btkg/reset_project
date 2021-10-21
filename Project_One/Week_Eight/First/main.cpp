#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    bool car[5] = {false, false, false, false, false};
    for (int i = 1; i <= 4; i++)
    {
        car[i] = true;
        if (car[2] == true)
        {
            a = 1;
        }
        if (car[4] == true)
        {
            b = 1;
        }
        if (!(car[3] == true))
        {
            c = 1;
        }
        if (!(car[4] == true))
        {
            d = 1;
        }
        if (a + b + c + d == 1)
        {
            cout << i << endl;
            if (a == 1)
            {
                cout << "A" << endl;
                return 0;
            }
            else if (b == 1)
            {
                cout << "B" << endl;
                return 0;
            }
            else if (c == 1)
            {
                cout << "C" << endl;
                return 0;
            }
            else if (d == 1)
            {
                cout << "D" << endl;
                return 0;
            }
        }
        car[i] = false;
        a = 0;
        b = 0;
        c = 0;
        d = 0;
    }
}
