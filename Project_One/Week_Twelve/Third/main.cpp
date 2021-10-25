#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double a[n], b[n], max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            double len = sqrt((a[i] - a[j]) * (a[i] - a[j]) + (b[i] - b[j]) * (b[i] - b[j]));
            max = (max > len) ? max : len;
        }
    }
    cout << fixed << setprecision(4) << max << endl;
}
