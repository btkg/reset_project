#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n1 = 0;
    n100 = n / 100;
    n50 = (n % 100) / 50;
    n20 = (n - n100 * 100 - n50 * 50) / 20;
    n10 = (n - n100 * 100 - n50 * 50 - n20 * 20) / 10;
    n5 = (n % 10) / 5;
    n1 = n % 5;
    cout << n100 << endl
         << n50 << endl
         << n20 << endl
         << n10 << endl
         << n5 << endl
         << n1 << endl;
    return 0;
}
