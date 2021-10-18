#include <iostream>
// #include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int array[n];
    // int bit_array[20];
    // for (int i = 19; i >= 0; i--)
    // {
    //     bit_array[i] = pow(2, i);
    // }

    for (int i = 0; i < n; i++)
    {
        // int tmp = array[i], count = 0;
        // for (int j = 9; j >= 0; j--)
        // {
        //     if (tmp >= bit_array[j])
        //     {
        //         count++;
        //         tmp -= bit_array[j];
        //         while (tmp == 0)
        //         {
        //             break;
        //         }
        //     }
        // }
        int x, ans = 0;
        cin >> x;
        while (x > 0)
        {
            ans += x % 2;
            x /= 2;
        }
        cout << ans << endl;
    }
    return 0;
}
