#include <iostream>
using namespace std;
int main()
{
    char a[500];
    cin.getline(a, 500);
    int count = 0;
    char tmp[50];

    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != ' ')
        {
            tmp[count] = a[i];
            count++;
            if (a[i + 1] == ' ' || a[i + 1] == '\0')
            {
                for (int j = count - 1; j >= 0; j--)
                {
                    cout << tmp[j];
                }
                count = 0;
            }
        }
        else
        {
            cout << a[i];
        }
    }
    cout << endl;
    return 0;
}
