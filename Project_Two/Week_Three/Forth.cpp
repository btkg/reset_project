#include <iostream>
using namespace std;
void f(char s[], int i)
{
    if (s[i] == '\0')
        return;
    else if (s[i] == ')')
    {
        for (int j = 0; i - j >= 0; j++)
        {
            if (s[i - j] == '(')
            {
                s[i] = ' ';
                s[i - j] = ' ';
                break;
            }
            else
                s[i] = '?';
        }
    }
    i++;
    f(s, i);
}

int main()
{
    char s[101];
    while (cin.getline(s, 101))
    {
        cout << s << endl;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] != ')' && s[i] != '(')
                s[i] = ' ';
        }
        f(s, 0);
        for (int i = 0; s[i] != '\0'; i++)
            if (s[i] == '(')
                s[i] = '$';
        for (int i = 0; s[i] != '\0'; i++)
            cout << s[i];
        cout << endl;
    }
    return 0;
}
