#include <iostream>
#include <stack>
using namespace std;
int main()
{
    char a[100];
    cin.getline(a, 100);
    char boy = a[0];
    stack<char> b;
    stack<int> index;
    b.push(boy);
    index.push(0);
    for (int i = 1; a[i] != '\0'; i++)
    {
        if(a[i] != b.top()){
            b.pop();
            cout << index.top() << " " << i << endl;
            index.pop();
        }
        else{
            b.push(a[i]);
            index.push(i);
        }
    }
    return 0;
}
