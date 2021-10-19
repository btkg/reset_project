#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;

    cout << a/100 << endl
         << (a-(a/100*100))/10 << endl
         << (a%10) << endl;
    return 0;
}
