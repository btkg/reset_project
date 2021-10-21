#include <iostream>
using namespace std;
int main()
{
    int n, k, flag = 0;
    cin >> n >> k;
    int array[1000] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (array[i] + array[j] == k)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}
