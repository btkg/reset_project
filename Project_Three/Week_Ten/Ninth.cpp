#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
using namespace std;
// 在此处补充你的代码
class A
{
public:
    char name;
    int age;
    A() {}
    A(int age) : name('A'), age(age) {}
};
class B : public A
{
public:
    B(int a)
    {
        name = 'B';
        age = a;
    }
};
class Comp
{
public:
    bool operator()(A *a1, A *a2)
    {
        return a1->age < a2->age;
    }
};
void Print(A *a)
{
    cout << a->name << " " << a->age << endl;
}
int main()
{
    int t;
    cin >> t;
    set<A *, Comp> ct;
    while (t--)
    {
        int n;
        cin >> n;
        ct.clear();
        for (int i = 0; i < n; ++i)
        {
            char c;
            int k;
            cin >> c >> k;

            if (c == 'A')
                ct.insert(new A(k));
            else
                ct.insert(new B(k));
        }
        for_each(ct.begin(), ct.end(), Print);
        cout << "****" << endl;
    }
}
