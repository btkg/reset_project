#include <iostream>
#include <string>
using namespace std;
int main()
{
    string in;
    cin >> in;
    char b[501][501] = {0};
    int count[501] = {0};
    for (int i = 0; in[i] != '\0'; i++)
    {
        if (isalpha(in[i]))
        {
            if (isupper(in[i]))
            {
                b[tolower(in[i])][i] = 1;
                count[tolower(in[i])]++;
            }
            else
            {
                b[in[i]][i] = 1;
                count[in[i]]++;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            for (int j = 0; j < 501; j++)
            {
                if (b[i][j] == 1)
                {
                    cout << char(i);
                }
            }
        }
    }
    return 0;

}
