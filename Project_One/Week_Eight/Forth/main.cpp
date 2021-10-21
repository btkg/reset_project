#include <iostream>
using namespace std;
int main()
{
    double N, K;
    cin >> N >> K;
    double house = 200, i;
    for (i = 1; i <= 20; i++)
    {
        if (i * N >= house)
        {
            cout << i << endl;
            return 0;
        }
        house = house + K * 0.01 * house;
    }
    cout << "Impossible" << endl;
    return 0;
}
