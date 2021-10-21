#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 95 && n <= 100)
    {
        cout << "1" << endl;
    }
    else if (n >= 90 && n < 95)
    {
        cout << "2" << endl;
    }
    else if (n >= 85 && n < 90)
    {
        cout << "3" << endl;
    }
    else if (n >= 80 && n < 85)
    {
        cout << "4" << endl;
    }
    else if (n >= 70 && n < 80)
    {
        cout << "5" << endl;
    }
    else if (n >= 60 && n < 70)
    {
        cout << "6" << endl;
    }
    else if (n < 60)
    {
        cout << "7" << endl;
    }
    return 0;
}
