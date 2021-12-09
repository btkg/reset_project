#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    if (a == "0" || b == "0")
    {
        cout << "0" << endl;
    }
    else
    {
        vector<int> v;
        vector<int> result;
        int count = 0;
        for (int i = b.length() - 1; i >= 0; i--)
        {
            for (int i = 0; i < count; i++)
            {
                v.push_back(0);
            }
            int temp = b[i] - '0';
            int q = 0, r;
            for (int j = a.length() - 1; j >= 0; j--)
            {
                r = (temp * (a[j] - '0')) % 10;
                v.push_back(r + q);
                q = (temp * (a[j] - '0')) / 10;
            }
            if (q != 0)
            {
                v.push_back(q);
            }
            if (result.size() == 0)
            {
                result = v;
            }
            else
            {
                q = 0, r;
                vector<int> vtemp;
                for (int i = 0; i < v.size(); i++)
                {
                    if (i > result.size() - 1)
                    {
                        result.push_back(0);
                    }
                    r = (result[i] + v[i] + q) % 10;
                    vtemp.push_back(r);
                    q = (result[i] + v[i] + q) / 10;
                }
                if (q != 0)
                {
                    vtemp.push_back(q);
                }
                result = vtemp;
            }
            v.clear();
            count++;
        }
        reverse(result.begin(), result.end());
        int flag = 0;
        for (auto i : result)
        {
            if (i != 0)
            {
                flag = 1;
            }
            if (flag == 1)
            {
                cout << i;
            }
        }
        if (flag == 0)
        {
            cout << "0";
        }
        cout << endl;
    }
    return 0;
}
