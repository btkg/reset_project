#include <iostream>
using namespace std;
int main()
{
    int id[3], total[100];
    char cate[3][100];
    double price[3][100];
    for (int i = 0; i < 3; i++)
    {
        cin >> id[i] >> total[i];
        for (int j = 0; j < total[i]; j++)
        {
            cin >> cate[i][j] >> price[i][j];
        }
    }
    double sum[3], cate_a = 0, cate_b = 0, cate_c = 0;
    for (int i = 0; i < 3; i++)
    {
        sum[i] = 0;
        for (int j = 0; j < total[i]; j++)
        {
            switch (cate[i][j])
            {
            case 'A':
                cate_a += price[i][j];
                break;
            case 'B':
                cate_b += price[i][j];
                break;
            case 'C':
                cate_c += price[i][j];
                break;
            default:
                break;
            }
            sum[i] += price[i][j];
        }
        cout << i + 1 << " ";
        printf("%.2f\n", sum[i]);
    }
    printf("A %.2f\n", cate_a);
    printf("B %.2f\n", cate_b);
    printf("C %.2f\n", cate_c);
    return 0;
}
