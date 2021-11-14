#include <iostream>
#include <cstring>
using namespace std;

class Array2
{
    int x;
    int y;
    int *arr;

public:
    Array2()
    {
        x = 0;
        y = 0;
        arr = NULL;
    }
    Array2(int m, int n)
    {
        x = m;
        y = n;
        arr = new int[x * y];
    }
    int *operator[](int i)
    {
        return arr + y * i;
    }
    int &operator()(int i, int j)
    {
        return *(arr + y * i + j);
    }
};

int main()
{
    Array2 a(3, 4);
    int i, j;
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 4; j++)
            a[i][j] = i * 4 + j;
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 4; j++)
        {
            cout << a(i, j) << ",";
        }
        cout << endl;
    }
    cout << "next" << endl;
    Array2 b;
    b = a;
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 4; j++)
        {
            cout << b[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}
