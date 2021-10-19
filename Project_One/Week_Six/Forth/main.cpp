#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    int maxInt = 0;
    for(int i = 0; i < n; i++){
        cin >> array[i];
        maxInt = (maxInt>array[i])?maxInt:array[i];
    }
    cout << maxInt;
    return 0;
}
