#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char str[10], substr[4];
    char max = str[0];
    int maxindex = 0;
    scanf("%s %s", str, substr);
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if (max < str[i + 1])
        {
            max = str[i];
            maxindex = i + 1;
        }
    }
    int j;
    for (j = 0; j <= maxindex; j++)
    {
        cout << str[j];
    }
    cout << substr;
    for (j; j < strlen(str); j++)
    {
        cout << str[j];
    }
    cout << endl;

    return 0;
}