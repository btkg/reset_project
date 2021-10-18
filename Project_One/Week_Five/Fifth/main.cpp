#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    // for(int i = n-1; i >= 1; i--){
    //     cout << array[i] << " ";
    // }
    // cout << array[0];
    while (n--)
    {
        cout << array[n];
        if (n > 0)
            cout << " ";
    }

    return 0;
}
