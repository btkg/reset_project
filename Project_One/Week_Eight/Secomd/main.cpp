#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int i = 5, sum = 0;
    while(i--){
        int in;
        cin >> in;
        if(in < a){
            sum += in;
        }
    }
    cout << sum << endl;
    return 0;
}
