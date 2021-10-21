#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        if (50 + (double)a / 3.0 < (double)a / 1.2)
        {
            cout << "Bike" << endl;
        }
        else if (50 + (double)a / 3.0 > (double)a / 1.2)
        {
            cout << "Walk" << endl;
        }
        else
        {
            cout << "All" << endl;
        }
    }
    return 0;
}
