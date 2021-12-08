#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {
        int s;
        cin >> s;
        int a;
        cin >> a;
        int A[10000];
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
        }
        int b;
        cin >> b;
        int B[10000];
        for (int i = 0; i < b; i++)
        {
            cin >> B[i];
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (A[i] + B[j] == s)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
        count = 0;
    }
    return 0;
}
