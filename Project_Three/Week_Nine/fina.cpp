#include <iostream>
#include <cmath>
#include <set>
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

//函数对象，判断大小
class MyCompare
{
public:
    bool operator()(const int &a1, const int &a2)
    {
        int num1 = 0, num2 = 0;
        num1 = getFactor(a1);
        num2 = getFactor(a2);

        if (num1 < num2)
            return true;
        else if (num1 > num2)
            return false;
        else if (num1 == num2)
            return (a1 < a2);
    }
};

int main()
{
    set<int, MyCompare> Myqueue;
    int n, num;
    cin >> n;
    while (n--)
    {
        for (int i = 0; i < 10; i++)
        {
            cin >> num;
            Myqueue.insert(num);
        }

        int min = *(Myqueue.begin());
        int max = *(Myqueue.rbegin());
        Myqueue.erase(min);
        Myqueue.erase(max);

        cout << max << ' ' << min << endl;
    }

    return 0;
}