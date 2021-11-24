#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a;
    cin >> a;
    cout << fixed << setprecision(5) << a << endl
         << setprecision(7) << scientific << a << endl;
    return 0;
}
