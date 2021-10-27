#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == i)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << "N" << endl;
    return 0;
}