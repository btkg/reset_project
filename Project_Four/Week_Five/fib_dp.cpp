#include <iostream>
using namespace std;
int fib_recurse(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib_recurse(n - 1) + fib_recurse(n - 2);
}
int fib_dp(int n)
{
    int fib[46];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[n];
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    // cout << fib_recurse(n) << endl;
    cout << fib_dp(n) << endl;
    return 0;
}
