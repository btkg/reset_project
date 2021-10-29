#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;

    while (n--)
    {
        char c[40];
        cin >> c;
        count += (strlen(c) + 1);

        while (count > 81)
        {
            cout << endl;
            count = strlen(c) + 1;
        }
        cout << c << " ";
    }
    return 0;
}
