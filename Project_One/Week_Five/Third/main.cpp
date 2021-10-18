#include <iostream>
using namespace std;
int main()
{
    int k;

    cin >> k;
    int array[k];
    int count_1 = 0, count_5 = 0, count_10 = 0;
    for(int i = 0; i < k; i++){
        cin >> array[i];
        if (array[i] == 1)
        {
            count_1 ++;
        }
        else if(array[i] == 5){
            count_5 ++;
        }
        else if(array[i] == 10){
            count_10 ++;
        }
    }
    cout << count_1 << endl << count_5 << endl << count_10 << endl;
    return 0;
}
