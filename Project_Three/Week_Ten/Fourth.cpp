#include <iostream>
using namespace std;
// 在此处补充你的代码
class CType
{
public:
    int value;
    int setvalue(int n)
    {
        value = n;
        return value;
    }
    int operator++(int)
    {
        return value;
    }
};
ostream &operator<<(ostream &, const CType &t)
{
    return cout << t.value*t.value;
}
int main()
{
    CType obj;
    int n;
    cin >> n;
    while (n)
    {
        obj.setvalue(n);
        cout << obj++ << " " << obj << endl;
        cin >> n;
    }
    return 0;
}
