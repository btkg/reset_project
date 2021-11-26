#include <iostream>
#include <queue>
#include <deque>
#include <set>
#include <cmath>
using namespace std;
//判断一个数是否为质数
bool isPrimeNumber(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

//得到一个数的质因数数目
int getFactor(int a)
{
    int num = 0;
    int k;
    for (int i = 2; i <= sqrt(a); i++)
    { //只循环到sqrt(a)，节省时间！
        if (a % i == 0)
        {
            k = a / i;
            if (i != k && isPrimeNumber(k)) //相对于i的另一个因数k也有可能是质数
                num++;
            if (isPrimeNumber(i)) //然后判断i是否为质数
                num++;
        }
    }
    return num;
}

class big
{
public:
    int bn;

    big(int n)
    {
        bn = n;
    }
    friend bool operator<(big a, big b)
    {
        if (getFactor(a.bn) < getFactor(b.bn))
        {
            return true;
        }
        else if (getFactor(a.bn) == getFactor(b.bn))
        {
            if (a.bn < b.bn)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int num;
    cin >> num;
    num = num * 10;
    priority_queue<big> p;
    deque<int> d;
    int count = 0;
    while (num--)
    {
        int n;
        cin >> n;
        p.push(big(n));
        count++;
        if (count == 10)
        {
            while (p.size())
            {
                d.push_back(p.top().bn);
                p.pop();
            }
            cout << d.front() << " " << d.back() << endl;
            d.pop_front();
            d.pop_back();
            while (d.size())
            {
                p.push(big(d.front()));
                d.pop_front();
            }
            count = 0;
        }
    }
    return 0;
}
