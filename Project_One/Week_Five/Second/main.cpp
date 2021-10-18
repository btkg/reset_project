#include <iostream>
using namespace std;
int main()
{
    int m, n, sum = 0;
    cin >> m >> n;
    while (m <= n)
    {
        if(m % 2 == 1){
            sum = sum + m;
            m = m + 2;
        }
        else if(m % 2 == 0){
            m ++;
        }
    }
    cout << sum << endl;
    return 0;
}
