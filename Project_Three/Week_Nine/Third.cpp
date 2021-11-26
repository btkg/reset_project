#include <iostream>
#include <set>
#include <string>
using namespace std;
void print_set(multiset<int> &s, int i)
{
    int count = 0;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        if (*it == i)
            count++;
    }
    cout << count << endl;
}
int main()
{
    int n;
    cin >> n;
    string s;
    multiset<int> st;
    set<int> _st;
    int i = 0;
    while (n--)
    {
        cin >> s;
        if (s == "add")
        {
            cin >> i;
            st.insert(i);
            _st.insert(i);
            print_set(st, i);
        }
        else if (s == "ask")
        {
            cin >> i;
            int count = 0;
            for (auto it = st.begin(); it != st.end(); it++)
            {
                if (*it == i)
                    count++;
            }
            if (count > 0)
                cout << "1 " << count << endl;
            else
            {
                if (_st.find(i) != _st.end())
                    cout << "1 0" << endl;
                else
                    cout << "0 0" << endl;
            }
        }
        else if (s == "del")
        {
            cin >> i;
            print_set(st, i);
            st.erase(i);
        }
    }
    return 0;
}
