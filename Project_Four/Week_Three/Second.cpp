// http://poj.org/problem?id=1057
#include <iostream>
#include <string>
#include <set>
using namespace std;
int dirCount = 0;

void printTab(int n)
{
    for (int i = 0; i < n; i++)
        cout << "|"
             << "     ";
}
void dirOpt(string dir)
{
    dirCount++;
    printTab(dirCount);
    cout << dir << endl;
    set<string> f;
    string ff;
    while (cin >> ff)
    {
        if (ff[0] == 'd')
        {
            dirOpt(ff);
        }
        else
        {
            if (ff != "]")
            {
                f.insert(ff);
            }
            else
            {
                for (set<string>::iterator it = f.begin(); it != f.end(); it++)
                {
                    printTab(dirCount);
                    cout << *it << endl;
                }
                dirCount--;
                return;
            }
        }
    }
}
int main()
{
    set<string> file;
    string str;
    int count = 1;
    int flag = 0;
    cout << "DATA SET " << count << ": " << endl;
    cout << "ROOT" << endl;
    while (cin >> str)
    {
        if (str[0] == '#')
        {
            return 0;
        }
        if (flag == 1)
        {
            cout << "DATA SET " << count << ": " << endl;
            cout << "ROOT" << endl;
            flag = 0;
        }
        if (str[0] == '*')
        {
            count++;
            for (set<string>::iterator it = file.begin(); it != file.end(); it++)
            {
                cout << *it << endl;
            }
            cout << endl;
            file.clear();
            flag = 1;
        }
        else if (str[0] == 'f')
        {
            file.insert(str);
        }
        else if (str[0] == 'd')
        {
            dirOpt(str);
        }
    }
    return 0;
}
