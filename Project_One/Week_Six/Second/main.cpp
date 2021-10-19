#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int fin = n - ceil((double)y/x);
    cout << ((fin>0)?fin:0);
}
