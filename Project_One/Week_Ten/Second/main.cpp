#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[80], b[80];
    cin.getline(a, 80);
    cin.getline(b, 80);
    int len = (strlen(a) < strlen(b)) ? strlen(a) : strlen(b);
    for (int i = 0; i < len + 1; i++)
    {
        while (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 32;
        }
        while (b[i] >= 'A' && b[i] <= 'Z')
        {
            b[i] += 32;
        }

        if (a[i] == '\0' && b[i] != '\0')
        {
            cout << "<" << endl;
            return 0;
        }
        else if (a[i] != '\0' && b[i] == '\0')
        {
            cout << ">" << endl;
            return 0;
        }

        if (a[i] == b[i])
        {
            continue;
        }
        else if (a[i] > b[i])
        {
            cout << ">" << endl;
            return 0;
        }
        else if (a[i] < b[i])
        {
            cout << "<" << endl;
            return 0;
        }
    }
    cout << "=" << endl;
    return 0;
}
