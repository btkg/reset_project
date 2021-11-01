#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int m;
    double a;
    cin >> m >> a;
    double out[m];
    int index[m];
    int count = -1;
    while (m--)
    {
        int in;
        double b;
        cin >> in >> b;
        if (b >= a)
        {
            count++;
            out[count] = b;
            index[count] = in;
        }
    }
    if (count == -1)
    {
        cout << "None." << endl;
        return 0;
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j <= count; j++)
        {
            if (out[i] > out[j])
            {
                swap(out[i], out[j]);
                swap(index[i], index[j]);
            }
        }
    }
    for (int i = count; i >= 0; i--)
    {
        cout << setfill('0') << setw(3) << index[i] << " ";
        printf("%.1f\n", out[i]);
    }
    return 0;
}
