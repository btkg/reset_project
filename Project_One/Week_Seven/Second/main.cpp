#include <iostream>
#include <string>
using namespace std;
int main()
{
    string n;
    cin >> n;
    cout << n << endl;
    string a , b;
    int flag = 1;
    for (int i = 0; i < n.length(); i++)
    {
        if (flag == 1)
        {
            if (!isdigit(n[i]))
            {
                flag = 0;
            }
            else
            {
                a += n[i];
            }
        }
        else
        {
            b += n[i];
        }
    }
    cout << a << " " << b << endl;
    return 0;
}
