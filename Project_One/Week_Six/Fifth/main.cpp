#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int array[6];
    int minEven = 100, maxOdd = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> array[i];
        if(array[i] % 2 == 0){
            minEven = (minEven<array[i])?minEven:array[i];
        }
        else{
            maxOdd = (maxOdd>array[i])?maxOdd:array[i];
        }
    }
    cout << abs(maxOdd - minEven);
    return 0;
}
