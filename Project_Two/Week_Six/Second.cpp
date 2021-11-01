#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        char a[255];
        cin >> a;
        for (int i = 0; a[i] != '\0'; i++)
        {
            if (a[i] == 'A')
            {
                cout << 'T';
            }
            else if (a[i] == 'T')
            {
                cout << 'A';
            }
            else if (a[i] == 'C')
            {
                cout << 'G';
            }
            else if (a[i] == 'G')
            {
                cout << 'C';
            }
        }
        cout << endl;
    }
    return 0;
}
