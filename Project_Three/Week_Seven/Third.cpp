#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    cin >> a;
    cout << hex << a << endl;
    cout.fill('0');
    cout << dec << right << setw(10) << a << endl;
    return 0;
}
